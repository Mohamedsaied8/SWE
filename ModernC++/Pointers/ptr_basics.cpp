#include <iostream>


int add(int a, int b)
{
    return a+b;
}

/*
function that takes two integers
return sum & multiplication
*/
void calculate(int a, int b, int* sum, int *mul)
{
    *sum = a + b;
    *mul = a * b;
}

int main()
{
    int y = 20;
    int x = 10;
    int sum_result = 0;
    int mul_result = 0;
    calculate(x, y, &sum_result, &mul_result);
    std::cout << "sum result " << sum_result << " mul result " << mul_result << "\n";

    return 0;
}