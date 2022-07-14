#include "graphics/graphics.h"
VBEInfoBlock* gVBEInfo;

/*
    RGB
    R - 4bits
    G - 5Bits
    B - 4bits
*/

int start() {
    // video_memory = (char *)0xb8000;
    // gVBEInfo = (VBEInfoBlock *)VBEInfoAddress;
    // for (int i = 0; i < gVBEInfo->xResolution * gVBEInfo->yResolution; i++) {
    //     *((unsigned short *)gVBEInfo->screenPtr + i) = RGBProcessor(245, 237, 220);
    // }
    clearScreen(245, 237, 220);
    drawRectangle(20, 40, 50, 40, 0, 0, 0);
    drawRectangle(45, 40, 50, 40, 0, 0, 0);
    // drawCharacterText('A');
    // while(1);

}