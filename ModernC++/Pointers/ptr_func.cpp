#include <iostream>
void fun(int a)
{
    std::cout << a << "\n";
}

void fun2(void (*callback)(int) , int b)
{
    callback(b); //execute fun
}

int main()
{
   fun2(fun , 10);

   return 0;
}