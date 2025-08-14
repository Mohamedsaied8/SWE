#include <iostream>
namespace Calculator
{
    int first;
    int second;
    char op;
    int result;
    void UserInput()
    {
        std::cout << "please enter first number\n";
        std::cin >> first;

        std::cout << "please enter second number\n";
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
            default:
                break;
        }
    }
    void Display()
    {
        std::cout << "result " << result << std::endl;
    }

}
int main()
{
   while(1)
   {
    Calculator::UserInput();
    Calculator::Compute();
    Calculator::Display();
   }
    return 0;
}