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
    ; jmp CODE_SEG:load32   ;as kernel starting point is abstracted, 
                            ; we need to load kernel at some absolute addr and jmp to it

    jmp $


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

times 510-($ - $$) db 0
dw 0xAA55