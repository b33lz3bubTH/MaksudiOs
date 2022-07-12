[BITS 16]
[ORG 0x7c00]


start:
    ; xor ax,ax
    mov ax, 0x0000
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov sp, 0x7c00

__checkTestDiskExt__:
    mov [driveId], dl
    mov ah, 0x41
    mov bx, 0x55aa
    int 0x13

    ;if carry flag is set checkTestDiskExt Not Supported
    jc label__notSupported
    cmp bx, 0xaa55 ; if bx isnt 0xaa55 diskext not supported
    jne label__notSupported
    

__bootstrapLoader__:
    mov si, readPacketSize
    mov word[si], 0x10          ; feild = size, offset 0
    mov word[si+2], 5           ; feild = number, offser 2
    mov word[si+4], 0x7e00      ; feild = offset, offset 4
    mov word[si+6], 0           ; feild segment, offset 6
    mov dword[si+8], 1          ; feild address lower, offset 8
    mov dword[si+0xc], 0         ; feild address higher, offset 12

    mov dl, [driveId]build
    mov ah, 0x42                ; use diskext service
    int 0x13

    jc label__readError
    mov dl, [driveId]
    jmp 0x7e00          ; mem of loader file, that is readed from disk to main mem


label__readError:
label__notSupported:
    mov ah, 0x13
    mov al, 1
    mov bx, 0xa
    xor dx,dx
    mov bp, initilizationErrMessage
    mov cx, initilizationErrMessageLength
    int 0x10

__end__:
    htl
    jmp __end__
driveId: db 0
initilizationErrMessage: db "Init Failed, Inside Boot Process", 0xa
initilizationErrMessageLength: equ $-initilizationErrMessage
readPacketSize: times 16 db 0

times (0x1be - ($ - $$)) db 0
    db 0x80                 ;boot indicator
    db 0, 2, 0              ;starting CHS
    db 0x0f0                ;type
    db 0x0ff, 0x0ff, 0x0ff  ;ending CHS
    dd 1
    dd (20*16*63 - 1)       ;size

    times (16*3) db 0

    db 0x55
    db 0xaa