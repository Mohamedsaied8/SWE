#include <iostream>

int main()
{
    double x =10;
    int y = 9;
    auto duplicate = [&x](int i)->void{
                         x= 2;
                         std::cout << "result " << x*i << "\n";
                        };

   

    return 0;
 }