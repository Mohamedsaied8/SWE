#include <iostream>
#include <functional>
#include <array>

void calculate(const std::function<void (int element)> &square,
               const std::function<void (int element)> &cube,
               const std::array<int,5> &number_list)
{
    for(const int& element : number_list)
    {
        if(element % 2 != 0)
        {
            cube(element);
        }
        else{
            square(element);
        }
    }
}

int main()
{
   std::array<int,5> number_list{100, 200, 300, 400, 500};

    auto compute_square = [](int element)->void
                         { std::cout << "square " << element * element
                             << "\n";
                         };
    
    auto compute_cube = [](int element)
                         { 
                            std::cout << "cube " << element * element * element 
                             << "\n";
                         };

    calculate(compute_square, compute_cube, number_list);

    return 0;
}