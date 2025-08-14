#include <iostream>


int function2(int i, double x)
{
    std::cout << "i " << i << std::endl;
    i +=2;
    return i;
}

void function1(int (*callback)(int , double), int i)
{
    double d{0};
    int result = callback(i, d);
    printf("address %x", callback);
}

int main()
{
    function1(function2, 8);

    return 0;
}