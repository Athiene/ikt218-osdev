ENTRY(start)

SECTIONS {
    . = 1M;

    .boot :
    {
        /* ensure that the multiboot header is at the beginning */
        *(.multiboot_header)
    }

    .text :
    {
        *(.text)
    }

    /* add the .rodata section for string literals */
    .rodata ALIGN(4) :
    {
        *(.rodata*)
    }
}