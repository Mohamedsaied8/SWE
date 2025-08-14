#include <iostream>
/*
+ - signed

2^8 = 256/2 

-127--->128

unsigned --positive only
0----->255
*/

int main()
{
    // char letter = 'a'; // 0x61 or 97 or 0110 0001

    // printf("%c\n",letter);
    // char my_letter = 97; 
    // printf("%c\n",my_letter);
    // char final_letter = letter + my_letter;
    // printf("%d\n", final_letter);

    // char size_of_ch = sizeof(char);
    // printf("%d\n", size_of_ch);
    // char size_of_int = sizeof(int);
    // printf("%d\n", size_of_int);
    // int size_of_double = sizeof(double);
    // printf("%d\n", size_of_double);

    std::cout << "size of char " <<  sizeof(char) << "\n"
            << "size of int " << sizeof(short int) << "\n"
            << "size of unsigned int " << sizeof(unsigned int) << "\n"
            << "size of float " << sizeof(float) << "\n"
            << "size of long " << sizeof(long long int)    << "\n"
            << "size of double " << sizeof(double)  << std::endl;


    return 0;
}