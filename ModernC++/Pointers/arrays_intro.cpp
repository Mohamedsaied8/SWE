#include <array>
#include <iostream>
#include <algorithm>

// inline bool compare(int a , int b)
// {
//     return a < b;
// }

void bubble_sort(std::array<int, 6> &list, bool (*cmp)(int, int))
{
    for(int i=0; i<list.size();i++)
    {
        for(int j=i+1; j< list.size(); j++)
        {
            if(cmp(list[i], list[j]))
            {
                std::swap(list[i], list[j]);
            }
        }
    }

}


struct compare
{
    bool operator()(int a, int b)
    {
        return a > b;
    }

    void operator()(double a)
    {
        std::cout << "element inside call operator " << a << std::endl;
    }

};

int main()
{
    // int matrix[2][2];
    // std::array<std::array<int,2>,2> matrix_2;
    
    // std::array<char,6> word; //stack

    // std::cout << "please enter array elements\n";
    // for(char &element : word)
    // {
    //     std::cin >> element; // letter
    // }
    // for(char element : word)
    // {
    //     std::cout << element; // 
    // }

    // word.fill('m');

    std::array<int, 6> nums{100,99,5,180,1000,33};

    compare cmp;
    cmp(10);
    std::sort(nums.begin(), nums.end(),  cmp);
   // bubble_sort(nums, compare);
    // a = 1000   b = 5 a > b (true) <<< descending order
    // a = 1000   b = 5 a < b (false) <<< ascending
 
    std::for_each(nums.begin(), nums.end(), [](int &a){ a*=2;});
    for(auto element : nums)
    {
        std::cout << "element " <<  element << " ";
    }
   

}