#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> TwoSum(std::vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while(left < right)
    {
        int currentSum = nums[left] + nums[right];
        if(currentSum == target)
        {
            return std::vector<int>{nums[left], nums[right]};
        }
        else if(currentSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return {};
}

int main()
{
    std::vector<int> num_list{1,2,5,3,4,6};
    std::sort(num_list.begin(), num_list.end());
    auto vect = TwoSum(num_list, 7);
    for(auto element : vect)
    {
        std::cout << "element : " << element << "\n";
    }
    return 0;
}