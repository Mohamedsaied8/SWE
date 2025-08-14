#include <iostream>

int main()
{
    int first_num = 0;
    int second_num = 0;
    char op =0;
    int result = 0;
    
    std::cout << "Please enter first number\n";
    std::cin >> first_num;
    std::cout << "Please enter second number\n";
    std::cin >> second_num;
    std::cout << "Please enter Operator ( + - / * )\n";
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
            std::cout << "operation is not supported\n";
            break;
    }

}