#include <iostream>

void implment_filter(float angle)
{

}

void read_sensor_data(void (*callback)(float angle))
{
    //....
    float angle = 60.0;
    callback(angle);
}

int main()
{
    read_sensor_data(implment_filter);

    return 0;
}