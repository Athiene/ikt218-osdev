default: run

.PHONY: default build_group_20 run clean


build_group_20/multiboot_header.o: multiboot_header.asm
	cd .. && mkdir -p build_group_20 && nasm -f elf64 group_20/multiboot_header.asm -o build_group_20/multiboot_header.o

build_group_20/boot.o: boot.asm
	cd .. && mkdir -p build_group_20 && nasm -f elf64 group_20/boot.asm -o build_group_20/boot.o

build_group_20/main.o: main.c
	cd .. && mkdir -p build_group_20 && gcc -c group_20/main.c -o build_group_20/main.o -m64 -nostdlib -nostartfiles -nodefaultlibs -static-libgcc

build_group_20/kernel.bin: build_group_20/multiboot_header.o build_group_20/boot.o build_group_20/main.o linker.ld
	cd .. && ld -n -o build_group_20/kernel.bin -T group_20/linker.ld build_group_20/multiboot_header.o build_group_20/boot.o build_group_20/main.o

build_group_20/os.iso: build_group_20/kernel.bin grub.cfg
	cd .. && mkdir -p build_group_20/isofiles/boot/grub && cp group_20/grub.cfg build_group_20/isofiles/boot/grub && cp build_group_20/kernel.bin build_group_20/isofiles/boot/ && grub-mkrescue -o build_group_20/os.iso build_group_20/isofiles

run: build_group_20/os.iso
	cd .. && qemu-system-x86_64 -cdrom build_group_20/os.iso

build: build_group_20/os.iso

clean:
	cd .. && rm -rf build_group_20