#include <iostream>

class Rectangle
{
    public:
    Rectangle(int length, int width) : m_length{length}, m_width{width}
    {
    }

    void setWidth(int width)
    {
        m_width = width;
    }
    void setLength(int length)
    {
        m_length = length;
    }
    int getWidth()
    {
        return m_width;
    }
    int getLength()
    {
        return m_length;
    }
    int getArea()
    {
        return m_length * m_width;
    }
    int m_length;
    int m_width;
};

class Square : public Rectangle
{
    public:
    Square(int length, int width) : Rectangle(length, width)
    {}

    void setWidth(int width)
    {
        m_width = m_length = width;
    }

    void setLength(int length)
    {
        m_length = m_width  = length;
    }

};

void Process(Rectangle &rectangle)
{
    auto width = rectangle.getWidth();
    rectangle.setLength(10);
    auto actual_area = rectangle.getArea();
    auto expected_area = width * rectangle.getLength();
    std::cout << "Expected area " << expected_area << " and Actual Area: "
                << actual_area << std::endl;
}
int main()
{
    Rectangle rect(5, 5); 
    Process(rect); //rectangle 50
    Square square(5, 5);
    Process(square); // square 100
}

