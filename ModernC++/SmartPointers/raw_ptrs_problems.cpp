#include <iostream>

// 1) Memory leak : new without delete
// 2) double delete leads to undefined behavior
// 3) dangling pointer : early deletion

int* fun()
{
    int *p = new int;  
    delete p;
    return p;
}

int main()
{
    while(1)
    {
        int *p = fun();

        *p = 10; 

        std::cout << "read value " << *p << std::endl;

       // delete p; // double delete = undefined behavior (UB)
    }


    return 0;
}