#include <iostream>


class Button
{
    public:

};

class Window
{
    public:
    Window()
    {
        button = new Button();
    }
    private:
    Button* button;
};

int main()
{
    Window window;
}