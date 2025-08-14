#include <iostream>

namespace Calculator
{
    int first;
    int second;
    int result;
    char op;

    void UserInput()
    {
        std::cout << "please enter first num\n";
        std::cin >> first;
        std::cout << "please enter second num\n";
        std::cin >> second;
        std::cout << "please enter operation\n";
        std::cin >> op;
    }

    int add(int a, int b)
    {
        return a+b;
    }

    int sub(int a, int b)
    {
        return a-b;
    }
     int mul(int a, int b)
    {
        return a*b;
    }
     int divide(int a, int b)
    {
        return a/b;
    }
    int mod(int a, int b)
    {
        return a%b;
    }
    void Compute()
    {
        switch(op)
        {
            case '+':
                result = add(first, second);
                break;
            case '-':
                result = sub(first, second);
                break;
            case '*':
                result = mul(first, second);
                break;
            case '/':
                result = divide(first, second);
                break;
            case '%':
                 result = mod(first, second);
                break;
            default: break;

        }
    }

    void Display()
    {
        std::cout <<"result " << result << "\n";
    }
}


int main()
{
    Calculator::UserInput();
    Calculator::Compute();
    Calculator::Display();
}