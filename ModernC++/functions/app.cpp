#include <iostream>
#include "robot.h"


void RobotInitialization()
{
    robotStop();
}

int main()
{
    RobotInitialization();
    char control{0};
    while(1)
    {

        std::cout << "Send Control signal\n";
        std::cin >> control;

        switch(control)
        {
            case 'f':
                forward();
                break;
            case 'b':
                backward();
                break;
            case 'r': 
                right();
                break;
            case 'l':
                left();
                break;
            default:
                break;
        }
    }
}