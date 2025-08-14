#include <array>
#include <iostream>


void input(std::array<int, 3> &list)
{
    for(auto &element:list)
    {
       // std::cin >> element;
       element = 8;
    }
}

void output(std::array<int,3> list)
{
    for(auto element : list)
    {
        std::cout << "element: " << element << std::endl;
    }
}
int main()
{
    std::array<int, 3> arr;
    input(arr);
    output(arr);
}