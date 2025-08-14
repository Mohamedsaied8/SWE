#include <iostream>

int main()
{
    for(int i =10; i > 0; i--)
    {
        std::cout << "i = " << i << "\n";
    }

    int size = 0;
    std::string greeting("Hello");
    while(greeting.size() < 10)
    {
        std::cout << "size " << greeting.size() << "\n";
        greeting+='w';
        std::cout << "string " << greeting << "\n";
    }

    do{
        std::cout << "in do while size " << greeting.size() << "\n";
        size++;
    }while(size < 3);
}