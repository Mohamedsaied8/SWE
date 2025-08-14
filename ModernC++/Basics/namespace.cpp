#include <iostream> //cin , cout
#include <algorithm>

namespace Temperature
{
    int value = 25; // global variable
}

namespace Accelerometer
{
    double value = 10.500;
}


int main()
{
 
    std::cout << "temperature value " << Temperature::value;
    std::cout << "acceleration value " << Accelerometer::value;

    return 0;
}