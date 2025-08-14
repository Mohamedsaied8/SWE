#include "legacy_rectangle.h"


class Target
{
    public:
    virtual void Draw() = 0;
    virtual ~Target() = default;
};

class AdaptorRectangle : public Target, public LegacyRectangle
{
    public:
    AdaptorRectangle(int x1, int y1, int x2, int y2) : LegacyRectangle(x1, y1, x2, x2)
    {

    }

    void Draw()
    {
        LegacyRectangle::oldDraw();
    }
};

int main()
{
    Target* rectangle = new AdaptorRectangle(5, 1, 10 , 20);
    rectangle->Draw();
    return 0;
}