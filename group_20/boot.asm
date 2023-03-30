global start
section .text
bits 32
start:

    mov word [0xb8000], 0x0248 ; H
    mov word [0xb8002], 0x0265 ; e
    mov word [0xb8004], 0x026c ; l
    mov word [0xb8006], 0x026c ; l
    mov word [0xb8008], 0x026f ; o
    mov word [0xb800a], 0x022c ; ,
    mov word [0xb800c], 0x0220 ;
    mov word [0xb800e], 0x0277 ; w
    mov word [0xb8010], 0x026f ; o
    mov word [0xb8012], 0x0272 ; r
    mov word [0xb8014], 0x026c ; l
    mov word [0xb8016], 0x0264 ; d
    mov word [0xb8018], 0x0221 ; !

lgdt [gdt64.pointer]

section .rodata
gdt64:
    dq 0 ; NULL descriptor
.code: equ $ - gdt64
    dq (1<<44) | (1<<47) | (1<<41) | (1<<43) | (1<<53)  ; Text descriptor
.data: equ $ - gdt64
    dq (1<<44) | (1<<47) | (1<<41) ; Data descriptor

.pointer:
    dw .pointer - gdt64 - 1
    dq gdt64

section .text
bits 64
long_mode_start:
    mov rax, 0x2f592f412f4b2f4f
    hlt