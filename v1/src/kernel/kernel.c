#include "graphics/graphics.h"
/*
    RGB
    R - 4bits
    G - 5Bits
    B - 4bits
*/

int start() {
    clearScreen(10, 10, 10);
    // drawRectangle(45, 40, 50, 40, 0, 0, 0);
    // drawCharacter(getFontCharacter, systemDefaultFontWidth, systemDefaultFontHeight, 'A', 0, 0, 255, 0, 0);
    char welcomeMessage[] = "Maksudi Os v1.0\n";
    char* ptrWelcomeMessage = welcomeMessage;

    printF(ptrWelcomeMessage, 1, 0, 0, 0, 0, 0, 0, 0);
    while (1);

}