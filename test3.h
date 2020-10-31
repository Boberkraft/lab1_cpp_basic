#include <iostream>

// przepraszam za wrzucenie definicji w maina, ale tak jest chyba czytelniej :)

void print(float liczba) {
    std::cout << "float[" << liczba << " ]\n";
}

void print(int liczba) {
    std::cout << "int[" << liczba << " ]\n";
}

class A {
public:
    void print(int liczba) {
        std::cout << "liczba[" << liczba << "]\n";
    }
};

class B : public A {
public:
    void print(int liczba) {
        std::cout << "Duża Liczba[" << liczba * 20 << "]\n";
    }
};