#include "intdt.h"
#include "../memory/memory.h"
#include "../config.h"
#include "../kernel/kernel.h"


struct intdtDesc idtDescriptors[MAKSUDIOS_TOTAL_INTERUPTS];
struct intdtrDesc idtrDescriptors;


extern void idtLoad(struct intdtrDesc* ptr);

void idtZero(){
    printString("Divide By 0 Exception\n");
}


void idtSet(int interupt_no, void* address){
    struct intdtDesc* descriptor = &idtDescriptors[interupt_no];
    descriptor->offset_1 =  (uint32_t) address & 0x0000fff;
    descriptor->selector = KERNEL_CODE_SELECTOR;
    descriptor->zero = 0x00;
    descriptor->type_attr = 0xEE;
    descriptor->offset_2 = (uint32_t) address >> 16;
}

void idtBootstrap(){
    memset(idtDescriptors, 0, sizeof(idtDescriptors));
    idtrDescriptors.limit = sizeof(idtDescriptors) -1;
    idtrDescriptors.base = idtDescriptors;

    idtSet(0, idtZero)

    // load int descriptior table
    idtLoad(&idtrDescriptors);
}