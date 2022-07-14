; instruction docs
; loadsb loads the first char from si is point to then inc si, loads the value in to al


; consideration
; __funcName__
; _funcNameUseLabel


; Real Mode
; 1MB mem access limitations
; No Mem Security/Hardware Security
; only access 8 and 16 bit registers

ORG 0x7c00
BITS 16

start:

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

times 510-($ - $$) db 0
dw 0xAA55