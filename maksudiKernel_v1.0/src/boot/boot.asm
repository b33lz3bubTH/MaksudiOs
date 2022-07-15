; instruction docs
; loadsb loads the first char from si is point to then inc si, loads the value in to al


; consideration
; __<funcName>__
; _<labelName>Label
; _interupt<IntName>_


; Real Mode
; 1MB mem access limitations
; No Mem Security/Hardware Security
; only access 8 and 16 bit registers

ORG 0x7c00
BITS 16

CODE_SEG equ _gdtCodeLabel - _gdtStartLabel
DATA_SEG equ _gdtDataSegLabel - _gdtStartLabel

_bootstraping:
    ; real hardware is madarchod BIOS parameter block, real hardware tries to modify the data which can corrupt.
    ; cause with usb bootup, bios madarchod treats it as hdd which leads to coruption, not exactly but similar shit
    ; not all bios is madarchod, but mostly mine is
    jmp short start
    nop

times 33 db 0   ; prevent writing somthing to our program [This is BIOS Parameter Block]


start:
    jmp 0:init         ;this will set the code segment to 0x7c0

init:
    cli ;clear interupts
    mov ax, 0
    mov ds, ax
    mov es, ax
    mov ax, 0x00
    mov ss, ax
    mov sp, 0x7c00   
    sti ;enable interupts

_loadProtected:
    cli
    lgdt[_gdtDescriptor]
    mov eax, cr0
    or eax, 0x1
    mov cr0, eax
    jmp CODE_SEG:load32   ;as kernel starting point is abstracted, 
                            ; we need to load kernel at some absolute addr and jmp to it



_gdtStartLabel:
_gdtNullLabel:
    ;4 bit of nulls
    dd 0x0
    dd 0x0


; offset 0x8
; CS should point to this
_gdtCodeLabel:
    dw 0xffff               ;segment lim 0-15 bits
    dw 0                    ; base 0-15 bits
    db 0                    ; base 16-20 bits
    db 0x9a                 ; access bytes
    db 11001111b            ; flags
    db 0

;offset 0x10
; DS, SS, ES, FS, GS    
_gdtDataSegLabel:
    dw 0xffff               ;segment lim 0-15 bits
    dw 0                    ; base 0-15 bits
    db 0                    ; base 16-20 bits
    db 0x92                 ; access bytes
    db 11001111b            ; flags
    db 0
_gdtEndLabel:

_gdtDescriptor:
    dw _gdtEndLabel - _gdtStartLabel
    dd _gdtStartLabel

 [BITS 32]
 load32:
    mov eax, 1
    mov ecx, 100
    mov edi, 0x0100000
    call __ataLbaRead__
    jmp CODE_SEG:0x0100000

__ataLbaRead__:
    mov ebx, eax, ; Backup the LBA
    ; Send the highest 8 bits of the lba to hard disk controller
    shr eax, 24
    or eax, 0xE0 ; Select the  master drive
    mov dx, 0x1F6
    out dx, al
    ; Finished sending the highest 8 bits of the lba

    ; Send the total sectors to read
    mov eax, ecx
    mov dx, 0x1F2
    out dx, al
    ; Finished sending the total sectors to read

    ; Send more bits of the LBA
    mov eax, ebx ; Restore the backup LBA
    mov dx, 0x1F3
    out dx, al
    ; Finished sending more bits of the LBA

    ; Send more bits of the LBA
    mov dx, 0x1F4
    mov eax, ebx ; Restore the backup LBA
    shr eax, 8
    out dx, al
    ; Finished sending more bits of the LBA

    ; Send upper 16 bits of the LBA
    mov dx, 0x1F5
    mov eax, ebx ; Restore the backup LBA
    shr eax, 16
    out dx, al
    ; Finished sending upper 16 bits of the LBA

    mov dx, 0x1f7
    mov al, 0x20
    out dx, al

    ; Read all sectors into memory
    _nextSectorLabel:
        push ecx

    ; Checking if we need to read
    _ataLbaReadTryAgainLabel:
        mov dx, 0x1f7
        in al, dx
        test al, 8
        jz _ataLbaReadTryAgainLabel

    ; We need to read 256 words at a time
    mov ecx, 256
    mov dx, 0x1F0
    rep insw
    pop ecx
    loop _nextSectorLabel
    ; End of reading sectors into memory
    ret

times 510-($ - $$) db 0
dw 0xAA55