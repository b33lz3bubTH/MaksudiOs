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
    println!("Rusty Maksudi Kernel: {}", version_number);

    
    rusty_maksudi_os::init();
    
    // invoke a breakpoint exception
    // Crash Test
    // x86_64::instructions::interrupts::int3(); 


    // a page fault
    unsafe {
        *(0xdeadbeef as *mut u64) = 42;
    };
    

    println!("HorenPokHorenPok 1..2..3\n");

    loop {}
}