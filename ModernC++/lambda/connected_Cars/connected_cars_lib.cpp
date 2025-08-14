#include <iostream>
#include "connected_cars_lib.h"

void V2V::SendBSM(std::function<int ()> callback);

{
    int sensor_reading = callback();
    std::cout << "Sending: Acceleration:" << sensor_reading<< " .. , Longitude: , Brake ...\n";
    
}