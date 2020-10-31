//
// Created by MacOS on 30/10/2020.
//

#ifndef Z1_WARTOSC_LICZBOWA_H
#define Z1_WARTOSC_LICZBOWA_H

class Wartosc_Liczbowa
{
public:
    virtual double modul () = 0;
    virtual void wypisz(std::ostream &out) = 0;
    virtual ~Wartosc_Liczbowa()
    {}
};


#endif //Z1_WARTOSC_LICZBOWA_H
