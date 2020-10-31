//
// Created by MacOS on 30/10/2020.
//

#include <iostream>
#include "Liczba.h"

using namespace std;

Liczba::Liczba(double re)
{
    cout << "new Liczba(" << re << ")\n";
    this->re = re;
}

Liczba::~Liczba(void)
{
    cout << "delete Liczba("<< this->re << ")\n";
}

double Liczba::modul()
{
    if (re > 0) {
        return re;
    } else {
        return -re;
    }
}

std::ostream & operator<<(std::ostream &out, Liczba &l)
{
    out << "Liczba rzeczywista: " << l.re << "\n";
    return out;
}