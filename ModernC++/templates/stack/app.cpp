#include "stack.h"
#include <iostream>

int main()
{
    Stack<int> stack(4);

    stack.Push(10);

    int element{0};
    stack.Pop(element);
    std::cout << "element " << element << "\n";
    Stack<double> stack_d(40);
    return 0;
}