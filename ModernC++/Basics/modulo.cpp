#include <iostream>

int main()
{
    int num;
    std::cout <<"please enter the number\n";
    std::cin >> num;
    if(num % 2 == 0)
    {
        std::cout << "number is even\n";
    }
    else
    {
        std::cout << "number is odd\n";
    }

}