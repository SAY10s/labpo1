//
// Created by Nikodem Majzner on 03/03/2026.
//

#include "Trojkat.hpp"
#include <iostream>
using namespace std;

Trojkat::Trojkat(double a, double b, double c)
    : a(a), b(b), c(c) {
    cout << "**Konstruktor Trójkąta(" << a << "," << b << "," << c << ")" << endl;
}

double Trojkat::GetA() const {
    return a;
}

void Trojkat::SetA(double a) {
    this->a = a;
}

double Trojkat::GetB() const {
    return b;
}

void Trojkat::SetB(double b) {
    this->b = b;
}

double Trojkat::GetC() const {
    return c;
}

void Trojkat::SetC(double c) {
    this->c = c;
}

double Trojkat::Obwod() const {
    return this->a + this->b + this->c;
}

double Trojkat::Pole() const {
    double p = this->Obwod() / 2;
    return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
}

void Trojkat::Wypisz(std::ostream &out) const {
    out << "Trojkat(a=" << a << ", b=" << b << ", c=" << c << ")";
}

Trojkat::~Trojkat() {
    cout << "**Destruktor Trójkąta(" << a << "," << b << "," << c << ")" << endl;
}
