#include <iostream>

int main()
{
    int x = 88;
    auto duplication = [&x]()->void{
                            x*=2;
                        };
    duplication();
    std::cout << "num " << x << "\n";

}