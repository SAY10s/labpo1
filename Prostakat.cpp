//
// Created by Nikodem Majzner on 03/03/2026.
//

#include "Prostakat.hpp"
#include <iostream>
using namespace std;

Prostokat::Prostokat(double a, double b)
    : a(a), b(b) {
    cout << "**Konstruktor Prostokąta(" << a << "," << b << ")" << endl;
}

double Prostokat::GetA() const {
    return a;
}

double Prostokat::GetB() const {
    return b;
}

void Prostokat::SetA(double a) {
    this->a = a;
}

void Prostokat::SetB(double b) {
    this->b = b;
}

// W TREŚCI BRAKOWAŁO CONST
double Prostokat::Obwod() const {
    return this->a * 2 + this->b * 2;
}

// W TREŚCI BRAKOWAŁO CONST
double Prostokat::Pole() const {
    return this->a * this->b;
}

void Prostokat::Wypisz(std::ostream &out) const {
    out << "Prostokat(a=" << a << ", b=" << b << ")";
}

Prostokat::~Prostokat() {
    cout << "**Destruktor Prostokąta(" << a << "," << b << ")" << endl;
}
