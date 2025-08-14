/*
what is a pointer : its a variable that holds address
                     of another vairable
*/
#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "x address: " << a << " a address: " << &a <<
    "value of x after swapping: " << *a << "\n";
}

void swap(int& a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int add(int a, int b)
{
    return a+b;
}
int main()
{ 
    int x = 10;
    int y = 20;

    int result = add(x, y);

   std::cout << "x address: "  << &x << "\n";
   std::cout << "x " << x << " y" << y <<"\n";

    int &r = x;
    swap(x, y);

    return 0;
}