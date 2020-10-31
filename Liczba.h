//
// Created by MacOS on 30/10/2020.
//

#ifndef Z1_LICZBA_H
#define Z1_LICZBA_H

#include "Wartosc_Liczbowa.h"

class Liczba : public Wartosc_Liczbowa {
    double re;
public:
    Liczba operator+(Liczba &right) {
        return Liczba(this->re + right.re);
    }

    double modul();

    Liczba(double re);

    ~Liczba(void);

    friend std::ostream &operator<<(std::ostream &out, Liczba &l);

    void wypisz(std::ostream &out) {
        out << *this;
    }

};

#endif //Z1_LICZBA_H
