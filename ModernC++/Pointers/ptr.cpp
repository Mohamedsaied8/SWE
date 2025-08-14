#include <iostream>

void printString(char *str)
{
    int i =0;
    while(str[i] != '\0')
    {
       std::cout << str[i];
        i++;
    }
    std::cout << std::endl;
}

int main()
{
    char *name = "Robotics"; // '\0'
    printString(name);
    
    char letter = 'a'; //1 byte

    char *ptr = &letter;


    int num = 10; // 4 byte
    int *ptr2 = &num;

    double stepSize = 554.558;
    double *doublePtr = &stepSize;

    std::cout << "size of character ptr" << sizeof(ptr) << " " <<
        "size of int ptr" << sizeof(ptr2) <<" "
        <<"double pointer size " << sizeof(doublePtr) <<std::endl;

    return 0;
}