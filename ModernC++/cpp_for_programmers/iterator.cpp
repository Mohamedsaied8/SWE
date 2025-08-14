#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

bool Cmp(int a, int b)
{
    return a < b;
}

struct Some_Lambda_Generated_Code
{
   bool operator()(int a, int b)
   {
        return a < b;
   }
};

int main()
{
    std::vector<int> vector_list(5);
   // std::array<int, 5> nums;

    std::vector<int>::iterator it;
    for(it = vector_list.begin(); it != vector_list.end(); ++it)
    {
        std::cin >> *it;
    }
    std::sort(vector_list.begin(), vector_list.end(),[](int a, int b){
                                                        return a <b;
                                                    });
    for(it = vector_list.begin(); it != vector_list.end(); ++it)
    {
        std::cout << "out: " << *it << "\n";
    }

}