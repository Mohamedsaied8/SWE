/*
1) get the input from user as float 
2) apply the following formula : km = miles * 1.609
3) display output
*/
#include <iostream> // library for console input output 

#define CONV_FACTOR 1.609

int main()
{
    std::cout << "please enter the distance in miles\n";

    constexpr float conversion_factor =  1.609; //compile-time
    float distance_miles = 0.0;
    std::cin >> distance_miles;
    float distance_km = distance_miles * conversion_factor;

    std::cout << "distance in km = " << distance_km << "\n";

    return 0;
}