//
// Created by MacOS on 30/10/2020.
//

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(double re, double im)
{
    cout << "new Complex(" << re << ", " << im << ")\n";
    this->re = re;
    this->im = im;
}

Complex::~Complex(void)
{
    cout << "delete Complex("<< this->re << ", " << this->im << ")\n";
}

Complex Complex::operator+(Complex &right) {
    return Complex(this->re + right.re, this->im + right.im);
}

double Complex::modul()
{
    return sqrt(pow(re, 2) + pow(im, 2));
}

std::ostream & operator<<(std::ostream &out, Complex &l)
{
    out << "Liczba urojona: " << l.re << "\n";
    return out;
}