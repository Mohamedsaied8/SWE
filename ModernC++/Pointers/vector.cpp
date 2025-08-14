#include <vector>
#include <iostream>
#include <algorithm>

void intput(std::vector<int> &list)
{
  for( auto it = list.begin(); it != list.end(); ++it)
    {
        std::cin >> *it;
    }

    for(auto& element : list)
    {
         std::cin >> element;
    }
}

void output(const std::vector<int>&list)
{
  for( auto it = list.begin(); it != list.end(); ++it)
    {
        std::cout << "element " << *it << "\n";
    }
}
int main()
{
    std::vector<int> nums(2, 0); 
    
    nums.push_back(10); // capacity
    nums.push_back(20);
    nums.push_back(20);

    std::cout << "size " << nums.size() 
    << "capacity " << nums.capacity() << "\n";

  
    std::sort(nums.begin(), nums.end(), [](int a, int b){return a>b;});
    for(int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i];
    }
    for(auto &element : nums)
    {
        element +=2;
        std::cout << "element " << element << 
        "size " << nums.size() <<"\n";
    }
 
}