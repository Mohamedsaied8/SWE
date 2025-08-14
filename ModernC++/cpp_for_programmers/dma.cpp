#include <iostream>

int main()
{
    while(1)
    {
        int *p = new int;
        *p = 10; 
        delete p;
    }
}