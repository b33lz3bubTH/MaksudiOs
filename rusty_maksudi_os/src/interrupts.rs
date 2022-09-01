use crate::println;
use x86_64::structures::idt::{InterruptDescriptorTable, InterruptStackFrame};

// This shit isnt a good way to work so,
// static mut IDT: InterruptDescriptorTable = InterruptDescriptorTable::new();


use lazy_static::lazy_static;

lazy_static! {
    static ref IDT: InterruptDescriptorTable = {
        let mut idt = InterruptDescriptorTable::new();
        idt.breakpoint.set_handler_fn(breakpoint_handler);
        idt
    };
}

pub fn init_idt() {
    IDT.load();
}

extern "x86-interrupt" fn breakpoint_handler(
    stack_frame: InterruptStackFrame){

    println!("EXCEPTION: BREAKPOINT\n{:#?}", stack_frame);


    println!("Forwarding\n");
}