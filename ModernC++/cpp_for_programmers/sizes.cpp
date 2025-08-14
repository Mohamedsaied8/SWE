#include <iostream>

int main()
{
    std::cout << "char size " << sizeof(char)
                << "\nchar ptr size " << sizeof(char*)
                << "\nint size " << sizeof(int)
                << "\nint ptr size " << sizeof(int*);
}