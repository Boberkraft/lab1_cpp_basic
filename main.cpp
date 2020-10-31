#include <iostream>

#include "Wartosc_Liczbowa.h"
#include "Liczba.h"
#include "Complex.h"

#include "test3.h"

void test1() {
    std::cout << "------ START test() ------\n";
    {
        Liczba _ = Liczba(1);
        Liczba *x = new Liczba(-5.3);
        Liczba *y = new Liczba(-2.3);
        Liczba z = *x + *y;
        z.wypisz(std::cout);
        std::cout << "Moduł z to " << z.modul() << "\n";
        delete x;
        delete y;
    }
    std::cout << "\n";
    {
        Complex _ = Complex(1, 1);
        Complex *x = new Complex(-5.3, 3);
        Complex *y = new Complex(-2.2, -3);
        Complex z = *x + *y;
        z.wypisz(std::cout);
        std::cout << "Moduł z to " << z.modul() << "\n";
        delete x;
        delete y;
    }
    std::cout << "------ KONIEC test1() ------\n";
}

void test2() {
    std::cout << "------ START test2() ------\n";

    Wartosc_Liczbowa *liczby[] = {
            new Liczba(3),
            new Liczba(-21),
            new Complex(-5.3, -21),
            new Complex(-3.3, 9)
    };

    for (auto number : liczby) {
        number->modul();
        delete number;
    }

    std::cout << "------ KONIEC test2() ------\n";
}

void test3() {
    std::cout << "------ START test3() ------\n";
    // Overloading:
    // różne metody o takiej samej nazwie ale różnych sygnaturach
    print(5);
    print((float) 5);

    // Overriding:
    // różne metody o takiej samej nazwie (tak jakby, bo jednak jest inny namespace)
    //              i takiej samej sygnaturze (tak jakby, bo jednak jest inny namespace)
    B b;
    b.print(5);
    static_cast<A>(b).print(5);
    std::cout << "------ KONIEC test3() ------\n";
}

int main() {
    test1();
    test2();
    test3();
}
