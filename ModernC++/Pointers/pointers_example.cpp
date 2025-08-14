#include <iostream>

void accelerometer_read_raw_data(float *x, float *y, float *z)
{
    *x = 0.2;
    *y = 0.7;
    *z = 0.1;
}

void complementry_filter(float *x, float *y , float *z)
{
    //....
}
int main()
{
    float x =0, y=0, z=0;
    accelerometer_read_raw_data(&x, &y , &z);
    complementry_filter(&x, &y , &z);
    std::cout << x << y << z;
    
    return 0;
}