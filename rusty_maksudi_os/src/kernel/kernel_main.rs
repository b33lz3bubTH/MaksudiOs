#![no_std]

use core::panic::PanicInfo;
/// This function is called on panic.
#[panic_handler]
pub fn panic(_info: &PanicInfo) -> ! {
    loop {}
}