#include <iostream>

class Fruit
{
    public:
    float price;
    int weight;

    float getTotal()
    {
        return price * weight;
    }
};

int main()
{
    Fruit orange;
    orange.price = 10;
    orange.weight = 5;
    std::cout << "total " << orange.getTotal() << "\n";

    return 0;
}