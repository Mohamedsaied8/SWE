#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
    public:
    Stack(int size);

    bool isFull();
    bool isEmpty();
    bool Push(T element);
    bool Pop(T& element);

    private:
    T* buffer;
    int m_size;
    int top;
};

template class Stack<int>;
template class Stack<double>;

#endif 
