#include <iostream>
#include "stack_g21.h"

int main()
{
    Stack<int> stack(10);
    stack.Push(8);
    stack.Push(5);
    stack.Push(3);

    int element{0};

    while(stack.Pop(element))
    {
        std::cout << "emlement poped " << element << "\n"; 

    }

    return 0;
}