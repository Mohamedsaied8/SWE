#include <iostream>
#include <array>

void Input(std::array<int, 3>& num_list)
{
    // for(int i =0; i < num_list.size(); i++)
    // {
    //     std::cout << "please enter nums_list[" << i <<"]\n";
    //     std::cin >> num_list[i];
    // }
   //range based for loop
    for(int& element : num_list)
    {
         std::cin >> element;
    }
}

void Output(const std::array<int, 3>& num_list)
{
    for(int i =0; i < num_list.size(); i++)
    {
        std::cout << "num_list[" << i <<"]" << num_list[i] << "\n";
    }
    for(int element : num_list)
    {
        std::cout << "num_list" << element << "\n";
    }
}

int main()
{
    std::array<int, 3> nums{0,0,0};
    Input(nums); 
    Output(nums);

    return 0;
}