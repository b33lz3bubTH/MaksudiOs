FILES = ./build/kernel.asm.o ./build/kernel.o ./build/intdt/intdt.asm.o ./build/intdt/intdt.o ./build/memory/memory.o
INCLUDES = -I./src
FLAGS= -g -ffreestanding -falign-jumps -falign-functions -falign-labels -falign-loops -fstrength-reduce -fomit-frame-pointer -finline-functions -Wno-unused-function -fno-builtin -Werror -Wno-unused-label -Wno-cpp -Wno-unused-parameter -nostdlib -nostartfiles -nodefaultlibs -Wall -O0 -Iinc

all: ./bin/boot.bin ./bin/kernel.bin
	rm -rf ./bin/os.bin
	dd if=./bin/boot.bin >> ./bin/os.bin
	dd if=./bin/kernel.bin >> ./bin/os.bin
	dd if=/dev/zero bs=512 count=100 >> ./bin/os.bin

./bin/kernel.bin: $(FILES)
	i686-elf-ld -g -relocatable $(FILES) -o ./build/kernelfull.o
	i686-elf-gcc -T ./src/linker.ld -o ./bin/kernel.bin -ffreestanding -O0 -nostdlib ./build/kernelfull.o

./bin/boot.bin: ./src/boot/boot.asm
	nasm -f bin ./src/boot/boot.asm -o ./bin/boot.bin

./build/kernel.asm.o: ./src/kernel/kernel.asm
	nasm -f elf -g ./src/kernel/kernel.asm -o ./build/kernel.asm.o

./build/kernel.o: ./src/kernel/kernel.c
	i686-elf-gcc $(INCLUDES) $(FLAGS) -std=gnu99 -c ./src/bootstrap.c -o ./build/kernel.o


./build/intdt/intdt.asm.o: ./src/intdt/intdt.asm
	nasm -f elf -g ./src/intdt/intdt.asm -o ./build/intdt/intdt.asm.o

./build/intdt/intdt.o: ./src/intdt/intdt.c
	i686-elf-gcc $(INCLUDES) $(FLAGS) -std=gnu99 -c ./src/intdt/intdt.c -o ./build/intdt/intdt.o

./build/memory/memory.o: ./src/memory/memory.c
	i686-elf-gcc $(INCLUDES) $(FLAGS) -std=gnu99 -c ./src/memory/memory.c -o ./build/memory/memory.o

run:
	qemu-system-x86_64 -hda ./bin/os.bin

clear:
	rm -r ./build
	rm -r ./bin


# gdb debugging
# target remote | qemu-system-x86_64 -hda ./bin/boot.bin -S -gdb stdio
