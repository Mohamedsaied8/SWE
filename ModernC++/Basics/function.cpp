
#include <iostream>

namespace Calculator
{
    int n1, n2;
    char op;
    int result;

    void UserInput()
    {
        std::cout << "please enter the first number\n";
        std::cin >> n1;
        std::cout << "please enter the second number\n";
        std::cin >> n2;
        std::cout << "please enter the operator\n";
        std::cin >> op;
    }

    int add(int a , int b)
    {
        return a+b;
    }

    int sub(int a , int b)
    {
        return a-b;
    }

    void Compute()
    {
        switch(op)
        {
            case '+':
                result = add(n1, n2);
                break;
        }
    }

    void Display()
    {
        std::cout << "result = " << result <<  "\n";
    }
}


int main()
{

    Calculator::UserInput();

    Calculator::Compute();
     
    Calculator::Display();

    return 0;
}