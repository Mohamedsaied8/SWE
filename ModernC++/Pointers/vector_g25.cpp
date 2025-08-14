#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums(2,0);
    nums.push_back(5);
    nums.push_back(15);
    nums.push_back(3);

    //range based for loop
    for(auto element : nums)
    {
        std::cout << "element " << element << "\n";
    }

    std::for_each(nums.begin(), nums.end(), [](int &element){
                                                return element *=2;
                                            });
    std::sort(nums.begin(),nums.end(),[](int a, int b){return a<b;});
    
    //iterator
    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << "element " << *it << "\n";
    }
    return 0;
}