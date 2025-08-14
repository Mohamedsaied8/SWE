#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
    public:
    Stack(int size) : m_size{size}
    {
        buffer = new T[m_size];
        top = -1; //initial value
    }

    bool isFull() { return top == m_size - 1;}

    bool isEmpty() { return top == -1;}

    bool Push(T element)
    {
        if(!isFull())
        {
            buffer[++top] = element;
            return true;
        }
        return false;

    }

    bool Pop(T& element)
    {
        if(isEmpty())
        {
            return false;
        }
        element = buffer[top--];
        return true;
    }

    private:
    T* buffer;
    int m_size;
    int top;
};

#endif 
