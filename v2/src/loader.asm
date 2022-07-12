[BITS 16]
[ORG 0x7e00]


start:
    mov ah, 0x13
    mov al, 1
    mov bx, 0xa
    xor dx,dx

    mov bp, initLoader
    mov cx, initLoaderLength
    int 0x10

    mov bp, message
    mov cx, messageLength
    int 0x10

__end__:
    htl
    jmp __end__


initLoader: db "Bootstrap Loader Done", 0xa
initLoaderLength: equ $-initLoader

message: db "Booting ...", 0xa
messageLength: equ $-message
