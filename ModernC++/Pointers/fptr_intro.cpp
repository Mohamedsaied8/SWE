#include <iostream>


int add(int a, int b)
{
    return a+b;
}




int main()
{
    // define a ptr to function
    int (*calculate_ptr)(int,int) = add;

    // invoke
    auto sum = calculate_ptr(10, 20);
    std::cout << "sum " << sum << std::endl;

}