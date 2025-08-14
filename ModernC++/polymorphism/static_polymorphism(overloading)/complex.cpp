#include "complex.h"
#include <iostream>

int Complex::num_complex = 0;

Complex::Complex(int real, int img) : m_real{real}, m_img{img}
{
    ++num_complex;
}

int Complex::getNumComplex()
{
    return num_complex;
}

Complex& Complex::operator+(Complex  const &rhs)
{
    this->mReal = this->mReal + rhs.mReal;
    this->mImg = this->mImg + rhs.mImg;
    return *this;
}

// copy assignment operator
Complex& Complex::operator=(Complex &rhs)
{

    this->mReal = rhs.mReal;
    this->mImg = rhs.mImg;
    return *this;
}
//return       operator << (inputs)
//overloading for insertor operator
std::ostream& operator<<(std::ostream& output,const Complex &complex)
{
    output << "ostream : " << complex.mReal << "+i" << complex.mImg;
    return output;
}

int main()
{
    Complex c1;
    Complex c2;
    Complex c3;

    std::cout << "num of instances : " << Complex::getNumComplex() << "\n";

    return 0;
}