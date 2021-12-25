all:
	bootloader_build
bootloader_build:
	echo "BUILDING"
	nasm ./bootloader/boot.asm -o ./bootloader/boot.img

clean:
	rm ./bootloader/boot.img

run:
	qemu-system-x86_64 -m 64 -fda ./bootloader/boot.img

