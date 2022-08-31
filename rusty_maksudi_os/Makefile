
build:
	cargo +nightly build --target x86_64-maksudi_os.json

clean:
	echo "use `cargo clean`"

build_bootable:
	cargo bootimage --target x86_64-maksudi_os.json

run:
	qemu-system-x86_64 -drive format=raw,file=target/x86_64-maksudi_os/debug/bootimage-rusty_maksudi_os.bin