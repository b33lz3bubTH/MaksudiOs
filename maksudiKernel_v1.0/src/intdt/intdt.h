#ifdef INTDT_H

#define INTDT_H
#include <stdint.h>

struct intdtDesc {
    uint16_t offset_1; // offset bits 0-15
    uint16_t selector; // Selector thats in out GDT
    uint8_t zero;
    uint8_t type_attr; // Descriptor Type and Attr
    uint16_t offset_2;
} __attribute__((packed));

struct intdtrDesc {
    uint16_t limit; // size of the desc table -1
    uint32_t base; // base addr of the start of the interupt descriptor table
} __attribute__((packed));

#endif
