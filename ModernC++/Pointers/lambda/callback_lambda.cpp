#include <iostream>
#include <string>
#include <functional>

int getTemperature()
{
    return 25;
}

int add(int a , int b)
{
    return a + b;
}
           
int calculate(std::function<int (int, int)> compute)
{
    int a = 10;
    int b = 5;
    return compute(a, b); //add
}
void send(std::string topic,  std::function<int ()> callback)
{
    std::cout << "Sending to topic: " << topic << std::endl;
    std::cout << "Temperature: " << callback() << std::endl;// lambda gets called.
}

void app_run()
{
    auto temp = getTemperature();
    send("/temp", [temp](){ return temp;});

    calculate(add);
}

int main()
{
    app_run();
    return 0;
}