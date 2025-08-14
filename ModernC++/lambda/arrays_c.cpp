#include <iostream>
#include <algorithm>

void output(int *num_list )
{
   for(int i=0; i< 5; i++)
    {
        std::cout << "element = " << num_list[i] << "\n";
    }
}

void input(int *num_list)
{
    for(int i=0; i < 5; i++)
    {
        std::cin >>num_list[i];  
    }
}

  
int main()
{
    int num_list[5];
    input(num_list);
    std::sort(num_list, num_list+5, [](int a, int b)->bool
                                    {return a < b;});
    output(num_list);
 
    return 0;
}