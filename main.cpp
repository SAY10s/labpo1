#include <iostream>

#include "Prostakat.hpp"
#include "Trojkat.hpp"
#include "Kolo.hpp"
using namespace std;

void Present(const FiguraPlaska &figura) {
    cout << "Figura: \n";
    cout << figura << endl;
}

void Present(double wartosc) {
    cout << "Liczba: " << wartosc << "\n" << endl;
}

int main() {
    Prostokat p1(2.0, 5.0);
    cout << "Pole: " << p1.Pole() << ", Obwod: " << p1.Obwod() << endl;
    cout << p1 << endl;

    Prostokat *p2 = new Prostokat(3.0, 4.0);
    cout << "Pole: " << p2->Pole() << ", Obwod: " << p2->Obwod() << endl;
    cout << *p2 << endl;

    FiguraPlaska *figury[3];
    figury[0] = new Prostokat(2.0, 3.0);
    figury[1] = new Trojkat(3.0, 4.0, 5.0);
    figury[2] = new Kolo(4.0);


    for (int i = 0; i < 3; i++) {
        cout << "Figura [" << i << "]: " << endl;
        cout << "Pole: " << figury[i]->Pole() << endl;
        cout << "Obwód: " << figury[i]->Obwod() << endl;
        cout << *figury[i] << endl;
        cout << "-----------------------" << endl;
    }
    Present(*figury[0]);
    Present(figury[0]->Pole());

    delete p2;
    cout << *figury[0] << endl;

    for (int i = 0; i < 3; i++) {
        delete figury[i];
    }

    return 0;
}
