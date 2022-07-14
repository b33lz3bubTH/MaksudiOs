#include "graphics.h"
int RGBProcessor(int r, int g, int b) {
    r = (int)(r / 3);
    g = (int)(g / 2);
    b = (int)(b / 3);

    return r << 11 | g << 5 | b;
}

void drawAPixel(int x, int y, int r, int g, int b) {
    VBEInfoBlock* vbeInfo = (VBEInfoBlock*)VBEInfoAddress;
    int index = y * vbeInfo->xResolution + x;
    *((unsigned short*)vbeInfo->screenPtr + index) = RGBProcessor(r, g, b);
}
void clearScreen(int r, int g, int b) {
    VBEInfoBlock* vbeInfo = (VBEInfoBlock*)VBEInfoAddress;
    for (int y = 0; y < vbeInfo->yResolution; y++) {
        for (int x = 0; x < vbeInfo->xResolution; x++) {
            drawAPixel(x, y, r, g, b);
        }
    }
}
void drawRectangle(int x, int y, int width, int height,
    int r, int g, int b) {
    for (int h = y; h < (y + height); h++) {
        for (int w = y; w < (x + width); w++) {
            drawAPixel(w, h, r, g, b);
        }
    }
}

void drawCharacter(int (*fontLoader)(int, int), int fontWidth,
    int fontHeight, char character ,int x, int y, int r, int g, int b) {
        
    for (int j = 0; j < fontHeight; j++) {
        unsigned int row = (*fontLoader)((int)character, j);
        int shift = fontWidth - 1;
        int bitValue = 0;
        for (int i = 0; i < fontWidth; i++) {
            // zero out everything except last value, bin arithmatic
            bitValue = (row >> shift) & 0b00000000000000000000000000000001;

            // print debug value for bitValue

            if (bitValue == 1) drawAPixel((x+i), (y+j), r, g, b);

            shift += -1;
        }
    }
}

void printF(char* messageBuffer, int useDefault, int fontWidth,
    int fontHeight, int x, int y, int r, int g, int b) {

    int _fontWidth, _fontHeight, _r, _g, _b;
    if(useDefault){
        _fontWidth = systemDefaultFontWidth;
        _fontHeight = systemDefaultFontHeight;
        _r = 255;
        _g = 0;
        _b = 0;
    }else{
        _fontWidth = fontWidth;
        _fontHeight = fontHeight;
        _r = r;
        _g = g;
        _b = b;
    }
    // drawCharacter(getFontCharacter, systemDefaultFontWidth, systemDefaultFontHeight, 'A', 0, 0, 255, 0, 0);
    int offsetI = 0, offsetJ = 0;

    for(int messageBufferLen = 0; *(messageBuffer + messageBufferLen) != '\0'; messageBufferLen+=1){
        if(*(messageBuffer + messageBufferLen) != '\n'){
            drawCharacter(getFontCharacter, _fontWidth, _fontHeight, *(messageBuffer + messageBufferLen), (x+offsetI), (y+offsetJ),_r, _g, _b);
        }
        offsetI += _fontWidth;
        if(*(messageBuffer + messageBufferLen) == '\n'){
            offsetI = 0;
            offsetJ += _fontHeight;
        }
    }
}
