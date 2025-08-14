#include <iostream>

int main()
{
    int first_num;
    int second_num;
    char op;
    int result;
    std::cout << "please enter the first number\n";
    std::cin >> first_num;

    std::cout << "please enter the second number\n";
    std::cin >> second_num;

    std::cout << "please enter the operation\n";
    std::cin >> op;

    switch(op)
    {
        case '+':
            result = first_num + second_num;
            break;
        case '-':
            result = first_num - second_num;
            break;
        default:
            break;
    }
    std::cout << "result " << result << std::endl;

}