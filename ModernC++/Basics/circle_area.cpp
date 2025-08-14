#include <iostream>
/*
*Description:
    calculation circle area where radius 20
    circle area = PI * (radius * radius)
*/
// Data types:
// char 8 bits = 1 byte 
// char letter = 'a';
// usigned char = 255;
// int height = 10; -32000 to +32000
// usigned int = 65535; 2^16
// float radius = 10.15; 4 bytes 
// double circle_area = 100.5;  8 bytes

int main()
{
    float radius = 0.0;
    constexpr float PI = 3.14;
    std::cout << "Please enter radius of the circle\n";
    std::cin >> radius;

    float area = radius * radius * PI;

    std::cout << "Area of the circle is " << area << "\n";
    
    return 0;
}