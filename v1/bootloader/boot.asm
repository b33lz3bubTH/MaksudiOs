[org 0x07c00]
[bits 16] ;mode


section code

.init:
  xor eax,eax
  mov ax, 0xb800      ;magic number
  mov es, ax          ;cant move direct value to es
  
  mov eax, 0x0
  mov ebx, 0x0
  mov ecx, 0x0
  mov edx, 0x0

.main:
  ;xor eax,eax
  ;mov eax, bootingMessage
  ;call _printA
  
  call _clear

  xor eax, eax
  xor ecx, ecx
  mov eax, bootingMessage
  call _printA

  xor eax, eax
  xor ecx, ecx
  ; need to change ecx to point to next line to print
  ; 1 is the line no, 2nd line
  ; 2 space of printing chars
  ; 80 perline 80 chars allowed
  mov ecx, 1 * 2 * 80
  mov eax, switchingToProtectedMessage
  call _printA
  
  ; switch to protected mode
  jmp _switchToProtected

  ;jmp _bootloaderEnd



; ================================== FUNCTIONS & LABELS DEFINATION BELOW =====================

_switchToProtected:
  cli                           ; clear interupt flag
  lgdt[gdt_descriptor]          ; load GDT table

  ; actual switching
  mov eax, cr0
  or eax, 0x1
  mov cr0, eax

  ; jmp to the protected mode
  jmp protectedInit

; print() 16bit mode
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
    mov byte [es:eax], 0x00
    inc eax

    ;screen size 25 col 80 row 2 bytes 1 char
    cmp eax, 2*25*80
    jl .clear_screen
  ret


; 16bit Data DEFINATION
bootingMessage: db 'MaksudiOs v1', 0
switchingToProtectedMessage: db 'FROM: [16bit]  TO: [32bit] Switch', 0



;=================================================== 32 BIT MODE CODE ============================================================
[bits 32]
protectedInit:
  mov ax, data_seg
  mov ds, ax
  mov ss, ax
  mov es, ax
  mov fs, ax
  mov gs, ax

  ; stack frame create
  mov ebp, 0x90000
  mov esp, ebp

  ;systemhung
  jmp $

gdt_begin:
gdt_null_descriptor:
  dd 0x00
  dd 0x00
gdt_code_seg:
  dw 0xffff
  dw 0x00
  dw 0x00
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

; padding for perfect 512 size
; 510 bytes
times 510 - ($ - $$) db 0x00 ; padding 510 with this, cause this needs to be 512b file
; 2 bytes
;this indicates its not data, its exec shit
db 0x55
db 0xaa



