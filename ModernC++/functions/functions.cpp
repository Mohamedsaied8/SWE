#include <iostream>

int max_temp = 100; //global variable

int lowest_temp; //uninitialized global variable << .bss
const int readTemp() 
{
    lowest_temp = -5; 
    std::cout << "current temp " << 25 << " max temp " << max_temp << "\n";
    return 25;
}
//output func_name(input parameters)
const int add(const int a,const int b) 
{
    return a + b;
}

const int add(const int a,const int b, int c)  //Ok
{
    return a + b;
}

//function overloading
const int add(const double a,const double b) 
{
return a + b;
}

int main()
{
    int x =3, y =5;

    int sum = add(x, y);

    int z = 40;
    int sum2 = add(z, y);
    return 0;
}