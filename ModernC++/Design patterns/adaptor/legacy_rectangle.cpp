extern "C"
{
    #include "functions.h"
}
#include <iostream>
#include "legacy_rectangle.h"

LegacyRectangle::LegacyRectangle(int x1, int y1, int x2, int y2)
{
    x1_ = x1;
    y1_ = y1;
    x2_ = x2;
    y2_ = y2;
}

void LegacyRectangle::oldDraw()
{
    std::cout << "inside old draw and calling ver old draw\n";
    veryOldDraw();
}

 