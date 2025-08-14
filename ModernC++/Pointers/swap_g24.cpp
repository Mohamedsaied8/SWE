#include <iostream>
/*
1) different parameter types
2) different number of parameters
*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    swap(&x, &y); //passing by address

    swap(x, y); //passing by reference

    std::cout << "x " << x << " y " << y << "\n";

    return 0;
}