[org 0x00]
[bits 16] ;mode


section code

.init:
  xor eax,eax
  mov ax, 0x07c0
  mov ds, ax          ; data segment initialize

  xor eax,eax
  mov ax, 0xb800      ;magic number
  mov es, ax          ;cant move direct value to es
  

  mov eax, 0x0
  mov ebx, 0x0
  mov ecx, 0x0
  mov edx, 0x0

.clear:
  mov byte [es:eax], 0x00       ;character to print
  inc eax
  mov byte [es:eax], 0x00
  inc eax

  ;screen size 25 col 80 row 2 bytes 1 char
  cmp eax, 2*25*80
  jl .clear

.main:
  ;xor eax,eax
  ;mov eax, bootingMessage
  ;call _printA

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
  mov eax, kernerlLoadingMessage
  call _printA

  xor eax, eax
  xor ecx, ecx
  mov ecx, 2 * 2 * 80
  mov eax, kernelSuccessCall
  call _printA


  jmp _bootloaderEnd


; print functionality
_printA:
  ; eax must contain addr to te text printing
  mov dl, byte[ eax + ebx] ;[0] of the strin pointed by eax

  cmp dl, 0
  je _printEnd

  mov byte [es:ecx], dl ;passing the picked up value to the screen
  inc ecx
  mov byte [es:ecx], 0x1a
  inc ecx

  inc ebx     ;actual picking counter

  jmp _printA

  _printEnd:
    xor ebx, ebx
    ret
 
_bootloaderEnd:
  jmp $               ; infinity loop

bootingMessage: db 'Maksudi Os booting ...', 0
kernerlLoadingMessage: db 'MaksudNal Loading 1 2 3, lets jam....', 0
kernelSuccessCall: db 'Kernel Successfully Loaded', 0

times 510 - ($ - $$) db 0x00 ; padding 510 with this, cause this needs to be 512b file

;this indicates its not data, its exec shit
db 0x55
db 0xaa



