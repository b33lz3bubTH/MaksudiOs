[org 0x7c00]
[bits 16]

section code

; ================= 16 bit Shit Code and 32 bit Shit Doesnt Work Together =======================

; .init:
;     xor eax,eax
;     mov ax, 0xb800      ;magic number
;     mov es, ax          ;cant move direct value to es
;
;     mov eax, 0x0
;     mov ebx, 0x0
;     mov ecx, 0x0
;     mov edx, 0x0

; .mainSixteenBit:
;     call _clear
;
;     xor eax,eax
;     xor ecx, ecx
;     mov eax, bootingMessage
;     call _printA
;
;     jmp _bootloaderEnd
; ================= Fucking End =======================


.switchToThrityTwoBit:

    ;Graphics Mode init
    mov ax, 0x4f01  ;query-ing the VBE
    mov cx, 0x111  ; mode screen resolution => search for vbe-modex for video mode for listing
    mov bx, 0x0800  ;offset for vbe info strucutre
    mov es, bx
    mov di, 0x00
    int 0x10        ;graphics interupt


    ; make switch to graphics mode
    mov ax, 0x4f02
    mov bx, 0x111   ; mode screen resolution => search vbe-modex for video mode for lisitng
    int 0x10


    xor ax,ax
    mov ds, ax
    mov es, ax



    mov bx, 0x1000  ;This is the location where the code is loaded from hard disk
    mov ah, 0x02
    ; Blink Err Main Cause [last worked value 21] [tried upto 38]
    mov al, 21     ;[The number of sectors to read from hard disk, changes on how big OS gets.]
    ; Blink Err Main Cause
    mov ch, 0x00
    mov dh, 0x00
    mov cl, 0x02
    int 0x13

    cli ; Turh off the interrupts
    lgdt [gdt_descriptor] ; Load the GDT Table

    mov eax, cr0
    or eax, 0x1
    mov cr0, eax            ;switchin to 32 bit

    jmp code_seg:protectedStart         ;jmping to far call

; ========================== Function/Label Defination ============================
_printA:
    ; eax must contain addr to te text printing
    mov dl, byte[ eax + ebx] ;[0] of the strin pointed by eax

    cmp dl, 0
    je _printEnd

    mov byte [es:ecx], dl ;passing the picked up value to the screen
    inc ecx
    mov byte [es:ecx], 0x1a
    inc ecx

    inc ebx     ;actual [i] counter

    jmp _printA

    _printEnd:
    xor ebx, ebx
    ret

; systemhung label 16bit
_bootloaderEnd:
    jmp $               ; infinity loop

;clear() with 0 set to every row,col
_clear:
    .clear_screen:
        mov byte [es:eax], 0x00       ;character to print
        inc eax
        mov byte [es:eax], 0x30
        inc eax

        ;screen size 25 col 80 row 2 bytes 1 char
        cmp eax, 2*25*80
        jl .clear_screen

        xor eax,eax             ; clearing mess
    ret


bootingMessage: db 'Welcome to maksudiOs v00.1', 0

[bits 32]
protectedStart:
    mov ax, data_seg
    mov ds, ax
    mov ss, ax
    mov es, ax
    mov fs, ax
    mov gs, ax

    ; Update the stack pointer
    mov ebp, 0x90000
    mov esp, ebp

    call 0x1000
    jmp $

gdt_begin:
gdt_null_descriptor:
    dd 0x00
    dd 0x00
gdt_code_seg:
    dw 0xffff
    dw 0x00
    db 0x00
    db 10011010b
    db 11001111b
    db 0x00
gdt_data_seg:
    dw 0xffff
    dw 0x00
    db 0x00
    db 10010010b
    db 11001111b
    db 0x00
gdt_end:
gdt_descriptor:
    dw gdt_end - gdt_begin - 1
    dd gdt_begin

code_seg equ gdt_code_seg - gdt_begin
data_seg equ gdt_data_seg - gdt_begin

times 510 - ($ - $$) db 0x00 ; Pads the file with 0s, making the file the right size

db 0x55
db 0xaa
