#include <iostream>

struct Fruit
{
    int price;
    float weight;

    int total()
    {
       return price * weight;
    }
};

int main()
{
    Fruit orange;
    orange.price = 10;
    orange.weight = 2.5;
    std::cout << "total for orange " << orange.total() <<  std::endl;
    Fruit apple;
    apple.price = 60;
    apple.weight = 2;
    std::cout << "total for apple " << apple.total() <<  std::endl;

    return 0;
}