#include <iostream>

template<class T>
class Stack
{
    public:
    Stack(int size_p) : size{size_p}
    {
        buffer = new T[size];
        top =-1;
    }

    ~Stack()
    {
        delete buffer[];
    }
    void push(T element)
    {
        buffer[++top] = element;
    }

    void pop(T& poped_element)
    {
        poped_element = buffer[top--];
    }
    
    private:
    T *buffer;
    int top;
    int size;
};

template<typename T>
class Array
{
    public:
    Array(size_t capacity) : capacity_{capacity}
    {
        buffer = new T[capacity_];
        top = -1;
    }

    void push_back(T element)
    {
        buffer[++top] = element;
    }
    ~Array()
    {
        delete buffer[];
    }
    private:
    T* buffer;
    size_t capacity_;
    int top_;
};

int main()
{
    Array<int> list_nums(10);
    list_nums.push_back(5);

    Array<char> list_chars(10);

    Stack<int> stack(2); // allocated inside stack

    return 0;
}