#include <iostream>

//parent : base


class Shape
{
    public:
    float getArea()
    {
        return area;
    }
    void display()
    {
        std::cout << "area " << getArea() << "\n";
    }
    protected:
    float area;
};

class Rectangle : public Shape
{
    public:
    Rectangle(int h, int w) : h_{h}, w_{w}
    {
        std::cout << "in paramterized height " << h_ << " width " << w_ << std::endl;
    }

    Rectangle() : Rectangle(0, 0)
    {
        std::cout << "in default height " << h_ << " width " << w_ << std::endl;
    }


    // Shape(const Shape& copy)
    // {
    //     this->h_ = copy.h_;
    //     this->w_ = copy.w_;
    //     std::cout << "copy constructor\n";
    // }
    Rectangle operator=(Rectangle& shape)
    {
        return *this;
    }

    Rectangle operator+(Rectangle shape)
    {
        Rectangle temp;
        temp.h_  = this->h_ + shape.h_;
        temp.w_ = this->w_ + shape.w_;
        return temp;
    }

    int getHeight()
    {
       return h_;
    }
    int getWidth()
    {
       return w_;
    }
    protected:
    int h_;
    int w_;
};

constexpr double PI = 3.14f;
//child : derived
class Circle : public Shape
{
    public:
    Circle(int r)
    {
       area = PI * r * r;
    }
};


// void draw(Shape shape)
// {

// }

int main()
{
    Circle c(10);
    c.display();

    // Shape shape;
    // Shape shape2(shape); //copy constructor
    // Shape shape3 = shape2; //copy constructor

    // Shape rect(2,4);
    // draw(rect);
    // shape = rect; // assignment operator

    // Shape square =  rect + shape;   //rect.operator+(shape); 
    // std::cout << "square height " << square.getHeight() << " wdith " << square.getWidth() << "\n";
    return 0;

}