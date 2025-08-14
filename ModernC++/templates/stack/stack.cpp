 #include "stack.h"
 
template<class T>
Stack<T>::Stack(int size) : m_size{size}
{
    buffer = new T[m_size];
    top = -1; //initial value
}

template<class T>
bool Stack<T>::isFull() { return top == m_size - 1;}

template<class T>
bool Stack<T>::isEmpty() { return top == -1;}

template<class T>
bool Stack<T>::Push(T element)
{
    if(!isFull())
    {
        buffer[++top] = element;
        return true;
    }
    return false;

}

template<class T>
bool Stack<T>::Pop(T& element)
{
    if(isEmpty())
    {
        return false;
    }
    element = buffer[top--];
    return true;
}

