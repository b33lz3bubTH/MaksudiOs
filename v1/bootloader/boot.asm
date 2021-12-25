[org 0x00]
[bits 16] ;mode


section code

.main
  xor eax,eax
  mov ax, 0xb800      ;magic number
  mov es, ax          ;cant move direct value to es


  mov byte [es:0x00], 'S'       ;character to print
  mov byte [es: 0x1], 0x30      ; bg color code

  ; [es: 0x1] = es(0xb800) + 0x01 ;
  
  mov byte [es:0x02], 'E'       ;character to print
  mov byte [es: 0x3], 0x30      ; bg color code
  mov byte [es:0x04], 'X'       ;character to print
  mov byte [es: 0x5], 0x30      ; bg color code
  mov byte [es:0x06], 'y'       ;character to print
  mov byte [es: 0x7], 0x30      ; bg color code

jmp $               ; infinity loop

times 510 - ($ - $$) db 0x00 ; padding 510 with this, cause this needs to be 512b file



;this indicates its not data, its exec shit
db 0x55
db 0xaa



