%include "kernel.asm"
[bits 32]

global _start

section .text

_start:
    mov edx, hello_world_string
    call print_string

    cli
.endloop:
    hlt
    jmp .endloop

section .data
    hello_world_string db "Hello, world!", 0
