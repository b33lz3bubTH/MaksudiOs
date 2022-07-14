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

void drawCharacterText(char character) {
    for (int y = 0; y < fontWidth; y++) {
        unsigned int row = getFontCharacter((int)character, y);
        int shift = fontWidth - 1;
        int bit_val = 0;
        for (int x = 0; x < fontHeight; x++) {
            // zero out everything except last value, bin arithmatic
            bit_val = (row >> shift) & 0b00000000000000000000000000000001;

            if (bit_val == 1) drawAPixel(x, y, 255, 255, 255);

            shift += -1;
        }
    }
}
