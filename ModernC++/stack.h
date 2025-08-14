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

