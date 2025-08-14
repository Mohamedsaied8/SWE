#include <iostream>

int main()
{
    unsigned int number = 0;
    std::cout << "please enter an integer\n";
    std::cin >> number;
    if(number % 2 == 0)
    {
        std::cout << "the number is even\n";
    }
    else
    {
        std::cout << "the number is odd\n";
    }
}