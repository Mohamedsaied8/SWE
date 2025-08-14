#include <iostream>
#include <array>
#include <algorithm>

void input(std::array<double, 5>& nums)
{
  for(double& element : nums) //range based for-loop
    {
        std::cin >> element;
    }  
}

int main()
{
    //int arr[5];
    std::array<double, 5> nums{3.9,5,6,8,1};
    std::sort(nums.begin(), nums.end(), [](double a, double b){return a<b;});

    std::array<double,5>::iterator it;
    for(it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << "element " << *it << "\n";
    }


    for(double element : nums) //range based for-loop
    {
        std::cout << "element " << element << "\n";
    }

    return 0;
}