#include <iosream>

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

    //out name( inputs )
    int add(int a, int b)
    {
        return a+b;
    }

    void Compute()
    {
        switch(op)
        {
            case '+':
             result = add(first, second); 
             break; 

        }
    }
    void Display()
    {
        std::cout << "result " << result << "\n";
    }

}
int main()
{
    Calculator::UserInput();
    Calculator::Compute();
    Calculator::Display();
}