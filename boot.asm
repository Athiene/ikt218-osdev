[org 0x7c00]

%include "gdt.asm"
%include "kernel.asm"

mov ax, 0x10
mov ds, ax
mov es, ax

mov ebx, hello_world_string
call print_string

jmp $

times 510 - ($ - $$) db 0
dw 0xaa55
