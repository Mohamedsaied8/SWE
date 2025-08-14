#include <iostream>

#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
    public:
    Stack(int capacity) : size{capacity}
    {
        buffer = new T[size];
        top = -1;
    }

    bool isFull(){ return top == (size-1);}
    bool isEmpty(){ return top == -1;}

    bool push(T element)
    {
        if(isFull())
        {
            return false;
        }
        buffer[++top] = element;
        return true;
    }

    bool pop(T& element)
    {
        if(isEmpty())
        {
            return false;
        }
        element = buffer[top--];
        return true;
    }
    private:
    T *buffer;
    int size;
    int top;
};
#endif


int main()
{
    Stack<int> stack(5);
    stack.push(5);
    stack.push(4);
    stack.push(2);
    stack.push(1);

    int element;
    while(stack.pop(element))
    {
        std::cout << "poped element " << element << "\n";
    }


    Stack<double> stack_double(5);
    stack_double.push(3.5);
    stack_double.push(8.0);
    stack_double.push(13.9);

    double element_double;

    while(stack_double.pop(element_double))
    {
        std::cout << "poped element " << element_double << "\n";
    }


    return 0;
}