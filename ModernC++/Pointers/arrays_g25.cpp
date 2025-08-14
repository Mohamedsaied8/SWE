#include <iostream>
#include <array>

void input(int* arr)
{
    for(int i=0; i < 5; i++)
    {
        std::cin >>arr[i]; 
    }
}
void output(int arr[])
{
    for(int i=0; i < 5; i++)
    {
        std::cout  << "out " << arr[i] << "\n"; 
    }
}

void Input(std::array<int, 5>& arr)
{
    for(int i=0; i < arr.size(); i++)
    {
        std::cin >>arr[i]; 
    } 
}

void Output(std::array<int, 5>& arr)
{
    for(int i=0; i < arr.size(); i++)
    {
        std::cout <<arr[i]; 
    } 
}
int main()
{
    int nums[5]; //c-style array

    std::array<int, 5> nums_list{0,0,0,0,0}; // C++-style array
    Input(nums_list);
    Output(nums_list);

    // input(nums);
    // output(nums);
    
    return 0;
}