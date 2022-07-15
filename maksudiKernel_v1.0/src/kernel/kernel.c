#include "kernel.h"
#include <stdint.h>
#include "../utils/strings/stdstrings.h"



uint16_t* videoMemoryPtr = 0;
uint16_t terminalRows = 0;
uint16_t terminalCols = 0;

uint16_t makeCharacter(char c, char colour) {
    return(colour << 8) | c;
}

void terminalPutChar(int xPos, int yPos, char c, char color) {
    videoMemoryPtr[(yPos * VGAWidth) + xPos] = makeCharacter(c, color);
}
void terminalWriteChar(char c, char color) {
    switch ((int)c) {
    case 10:
        // \n case
        terminalRows += 1;
        terminalCols = 0;
        return;
    default:
        break;
    }
    terminalPutChar(terminalCols, terminalRows, c, color);
    terminalCols += 1;
    if (terminalCols >= VGAWidth) {
        terminalCols = 0;
        terminalRows += 1;
    }
}
void printString(const char* str) {
    size_t sLen = stringlength(str);
    for (int index = 0; index < sLen; index++) {
        terminalWriteChar(*(str + index), DefSysTextColor);
    }
}

void terminalBootstrap() {
    videoMemoryPtr = (uint16_t*)0xb8000;
    terminalCols = 0;
    terminalRows = 0;
    for (int y = 0; y < VGAHeight; y++) {
        for (int x = 0; x < VGAWidth; x++) {
            terminalPutChar(x, y, ' ', 0);
        }
    }
}


void kernelStart() {
    terminalBootstrap();
    printString("Maksudi Kernelx86\nInit Done...\n");
    printString("Ready\n");

}