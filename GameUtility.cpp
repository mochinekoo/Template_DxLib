#include "GameUtility.h"
#include <DxLib.h>

void GameUtility::DrawFix2DText(DrawType type, int x, int y, int size, string text, unsigned int textColor, unsigned int edgeColor) {
    SetFontSize(size);
    int strWidth = GetDrawStringWidth(text.c_str(), strlen(text.c_str()));

    switch (type)
    {
    case LEFT:
        break;
    case CENTER:
        x -= strWidth / 2;
        y -= size / 2;
        break;
    case RIGHT:
        x -= strWidth;
        break;
    }

    DrawString(x, y, text.c_str(), textColor, edgeColor);
}
