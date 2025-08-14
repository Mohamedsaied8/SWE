#include <iostream>
#include "connected_cars_lib.h"

int readAccelerometer()
{
    return 25;
}

int apply_fliter(int x)
{
    return x - 5;
}
void Log(int x)
{
    std::cout << x;
}


int main()
{
    int x = readAccelerometer(); //raw data
    Log(x);
    //.....

    //....

    auto lambda_sensor = [&x]()->int{
                            x =apply_fliter(x);
                            std::cout << "x " << x << "\n";
                                return 25;
                            };
    V2V::SendBSM(lambda_sensor);

    return 0;
}