#ifndef LEGACY_RECTANGLE_H
#define LEGACY_RECTANGLE_H

#include <iostream>

class LegacyRectangle
{
    public:
    LegacyRectangle(int x1, int y1, int x2, int y2);

    void oldDraw();
    
    private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;
};

#endif