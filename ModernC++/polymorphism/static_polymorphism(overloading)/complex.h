#ifndef COMPLEX_H
#define COMPLEX_H 
#include <iostream>

class Complex
{
    public:
    Complex(int real=0, int img=0);
    static int getNumComplex();
    Complex& operator+(Complex  const &rhs);
    Complex& operator=(Complex &rhs);
    friend std::ostream& operator<<(std::ostream& output,const Complex &complex);

    private:
    static int num_complex;
    int m_real;
    int m_img;
};

#endif