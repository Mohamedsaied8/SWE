#ifndef CONNTECTED_CARS_H
#define CONNTECTED_CARS_H
#include <functional>
namespace V2V
{
    void SendBSM(std::function<int ()> callback);
}

#endif
