export PREFIX="$HOME/c_crosscompiler/cross"
export TARGET=i686-elf
export PATH="$PREFIX/bin:$PATH"

# $PREFIX/bin/$TARGET-gcc --version
mkdir -p ./bin
mkdir -p ./build
make all