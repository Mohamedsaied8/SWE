#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void Input(std::vector<int>& nums)
{
    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        std::cin >> *it;
    }
}

void Output(std::vector<int>& nums)
{
    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << "out " << *it << "\n";
    }
}

void operation(std::function<void (std::vector<int>&)> callback,
               std::vector<int>& nums)
{
    callback(nums);
}

int main()
{
    std::vector<int> nums(5);

    operation(Input, nums);
    std::sort(nums.begin(), nums.end(), [](int a, int b)
                                        {return a > b;});
    operation(Output, nums);
    
    return 0;
}
