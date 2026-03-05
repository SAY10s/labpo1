//
// Created by Nikodem Majzner on 03/03/2026.
//

#ifndef LABPO1_TROJKAT_HPP
#define LABPO1_TROJKAT_HPP

#include "FiguraPlaska.hpp"

class Trojkat : public FiguraPlaska {
    double a, b, c;
    static int licznik;

    friend class FabrykaFigur;

    Trojkat(double a, double b, double c);

protected:
    void Wypisz(std::ostream &out) const override;

public:
    double GetA() const;

    void SetA(double a);

    double GetB() const;

    void SetB(double b);

    double GetC() const;

    void SetC(double c);

    double Obwod() const override;

    double Pole() const override;

    ~Trojkat() override;

private:
};

#endif //LABPO1_TROJKAT_HPP
