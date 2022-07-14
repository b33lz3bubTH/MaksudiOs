; instruction docs
; loadsb loads the first char from si is point to then inc si, loads the value in to al


; consideration
; __<funcName>__
; _<funcName>Label
; _interupt<IntName>_


; Real Mode
; 1MB mem access limitations
; No Mem Security/Hardware Security
; only access 8 and 16 bit registers

ORG 0
BITS 16

_bootstraping:
    ; real hardware is madarchod BIOS parameter block, real hardware tries to modify the data which can corrupt.
    ; cause with usb bootup, bios madarchod treats it as hdd which leads to coruption, not exactly but similar shit
    ; not all bios is madarchod, but mostly mine is
    jmp short start
    nop

times 33 db 0   ; prevent writing somthing to our program [This is BIOS Parameter Block]


start:
    jmp 0x7c0:init         ;this will set the code segment to 0x7c0

_interuptHandleZERO:
    mov si, interuptZeroLabel
    call __printF__
    iret

_interuptHandleONE:
    mov si, interuptOneLabel
    call __printF__
    iret

init:
    cli ;clear interupts
    mov ax, 0x7c0
    mov ds, ax
    mov es, ax
    mov ax, 0x00
    mov ss, ax
    mov sp, 0x7c00   
    sti ;enable interupts


    ; interupt vector table add, custom interupt 
    mov word[ss:0x00], _interuptHandleZERO      ; if ss isnt given, it will use ds(0x7c0) interupt needs 4 bytes
    mov word[ss: 0x02], 0x7c0

    mov word[ss:0x04], _interuptHandleONE      ; if ss isnt given, it will use ds(0x7c0)
    mov word[ss: 0x06], 0x7c0                  ; 2bytes
    
    int 1
    
    
    mov si, bootloaderInit
    call __printF__

    mov si, bootstrapingKernelLoadMessage
    call __printF__

    jmp $

__clearRegs__:
        xor ax, ax
        xor bx, bx
        xor cx, cx
        xor dx, dx
        ret

__printF__:
    mov bx, 0
    _printFLoop:
        lodsb
        cmp al, 0
        je _printFdone
        call __printChar__
        jmp _printFLoop
    _printFdone:
        ret
__printChar__:
    mov ah, 0eh
    int 0x10
    ret

bootloaderInit: db 'Maksudi Os v1.0', 0xa, 0
bootstrapingKernelLoadMessage: db 'Bootstraping ... [Kernel Loading]', 0xa, 0
interuptZeroLabel: db 'Interupt Zero Occured', 0xa, 0
interuptOneLabel: db 'Interupt One Occured', 0xa, 0


times 510-($ - $$) db 0
dw 0xAA55