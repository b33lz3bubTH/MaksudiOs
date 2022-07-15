#include <stdint.h>
#include <stddef.h>
#include "stdstrings.h"

size_t stringlength(const char* str){
    size_t stringLength = 0;
    for(; *(str + stringLength) != '\0'; stringLength++);
    return stringLength;
}
