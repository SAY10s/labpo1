//
// Created by Nikodem Majzner on 03/03/2026.
//

#include "Kolo.hpp"
using namespace std;

Kolo::Kolo(double r)
    : r(r) {
    licznik++;
    cout << "**Konstruktor Koła(" << r << ")" << endl;
}

void Kolo::Wypisz(std::ostream &out) const {
    out << "Kolo(r=" << r << ") liczba obiektów: " << licznik;
}

double Kolo::GetR() const {
    return r;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::Obwod() const {
    return 2 * 3.14 * this->r;
}

double Kolo::Pole() const {
    return 3.14 * this->r * this->r;
}

Kolo::~Kolo() {
    cout << "**Destruktor Koła(" << r << ")" << endl;
    licznik--;
}

int Kolo::licznik = 0;
