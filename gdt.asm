[bits 16]

gdt_start:
    null_descriptor:
        dd 0
        dd 0
    code_descriptor:
        dw 0xffff ; limit low
        dw 0x0 ; base low
        db 0x0 ; base middle
        db 0b10011010 ; access byte
        db 0b11001111 ; limit and flags
        db 0x0 ; base high
    data_descriptor:
        dw 0xffff ; limit low
        dw 0x0 ; base low
        db 0x0 ; base middle
        db 0b10010010 ; access byte
        db 0b11001111 ; limit and flags
        db 0x0 ; base high

gdt_end:
    gdt_descriptor:
        dw gdt_end - gdt_start - 1
        dd gdt_start

load_gdt:
    lgdt [gdt_descriptor]
    mov eax, cr0
    or eax, 0x1
    mov cr0, eax

    mov ax, 0x10
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov esp, 0x90000 ; set stack pointer to top of memory

    ret

