/*
Input: radius
Formula: area = radius * radius * PI
display output : area
*/
#include <iostream>

constexpr float PI = 3.14; //compile-time text replacement

int main()
{
  float radius; // in stack
  
  std::cout << "please enter the radius\n";
  std::cin >> radius;

  float area = radius * radius * PI;

  std::cout << "area = " << area << std::endl;

    return 0;
}