#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> list{1,99,2,100,3,101};
  
    std::sort(list.begin(), list.end(), [](int a, int b){return a > b;});

    //std::sort(list.begin(), list.end(), [](int a, int b){return a < b;});

    auto print = [&](){ for(const auto& element : list)
    {
        std::cout << "element " << element << "\n";
    }};

    print();

    return 0;
}