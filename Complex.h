//
// Created by MacOS on 30/10/2020.
//

#ifndef Z1_COMPLEX_H
#define Z1_COMPLEX_H

#include "Wartosc_Liczbowa.h"

class Complex : public Wartosc_Liczbowa {
protected:
    double re;
    double im;
public:
    ~Complex(void);

    Complex(double re = 0, double im = 0);

    Complex operator+(Complex &);

    friend std::ostream &operator<<(std::ostream &out, Complex &l);

    double modul();

    void wypisz(std::ostream &out) {
        out << *this;
    }
};


#endif //Z1_COMPLEX_H
