#![no_std]
#![no_main]

mod vga_buffer;

use core::panic::PanicInfo;

/// This function is called on panic.
#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    println!("{}", _info);
    loop {}
}

#[no_mangle]
pub extern "C" fn _start() -> ! {

    let version_number = "v0.1";
    vga_buffer::WRITER.lock().default_screen();
    println!("Rusty Maksudi Kernel\n{}", version_number);
    loop {}
}