all: bootloader


debug_bootloader:
	ndisasm ./build/bin/boot.bin

bootloader:
	mkdir -p build/bin
	nasm -f bin ./src/boot.asm -o ./build/bin/boot.bin


run:
	qemu-system-x86_64 -hda ./build/bin/boot.bin


# gdb debugging
# target remote | qemu-system-x86_64 -hda ./build/bin/boot.bin -S -gdb stdio
