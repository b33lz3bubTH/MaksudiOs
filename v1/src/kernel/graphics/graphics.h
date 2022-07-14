#ifndef GRAPHICS_H
#define GRAPHICS_H


typedef struct VBEInfoBlockStruct {
    unsigned short modeAttr;
    unsigned char winAAttribute;
    unsigned char winBAttribute;
    unsigned short winGranuality;
    unsigned short winSize;
    unsigned short winASegment;
    unsigned short winBSegment;
    unsigned int winFuncPtr;
    unsigned short bytesPerScanLine;
    unsigned short xResolution;
    unsigned short yResolution;
    unsigned char charXSize;
    unsigned char charYSize;
    unsigned char numberOfPlanes;
    unsigned char bitsPerPixel;
    unsigned char numberOfBanks;
    unsigned char memoryModel;
    unsigned char bankSize;
    unsigned char numberOfImagePages;

    unsigned char bReserved;

    unsigned char redMaskSize;
    unsigned char redFeildPosition;

    unsigned char greenMaskSize;
    unsigned char greenFeildPosition;

    unsigned char blueMaskSize;
    unsigned char blueFeildPosition;

    unsigned char reservedMaskSize;
    unsigned char reservedFeildPosition;

    unsigned char direct_color_info;
    unsigned int screenPtr;
} VBEInfoBlock;

#define VBEInfoAddress 0x8000

// System Font Import
// extern const int fontWidth;
// extern const int fontHeight;

int getFontCharacter(int index, int y);


int RGBProcessor(int r, int g, int b);
void drawAPixel(int x, int y, int r, int g, int b);
void clearScreen(int r, int g, int b);
void drawRectangle(int x, int y, int width, int height, 
                    int r, int g, int b);
void drawCharacterText(char character);




#endif