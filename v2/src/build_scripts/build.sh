# ../ -> src
# ../../ -> top level directory

mkdir -p ../../bin/build
nasm -f bin -o ../../bin/build/boot.bin ../boot.asm
nasm -f bin -o ../../bin/build/loader.bin ../loader.asm

dd if=../../bin/build/boot.bin of=../../bin/build/boot.img bs=512 count=1 conv=notrunc
dd if=../../bin/build/loader.bin of=../../bin/build/boot.img bs=512 count=5 seek=1 conv=notrunc