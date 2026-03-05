//
// Created by Nikodem Majzner on 03/03/2026.
//

#ifndef LABPO1_PROSTAKAT_HPP
#define LABPO1_PROSTAKAT_HPP

#include "FiguraPlaska.hpp"

class Prostokat : public FiguraPlaska {
    double a, b;
    static int licznik;

    friend class FabrykaFigur;

    Prostokat(double a, double b);

protected:
    void Wypisz(std::ostream &out) const override;

public:
    double GetA() const;

    void SetA(double a);

    double GetB() const;

    void SetB(double b);

    // BRAKOWAŁO CONSTA W ZADANIU
    double Obwod() const override;

    // W TREŚCI BRAKOWAŁO CONST
    double Pole() const override;

    ~Prostokat() override;
};

#endif //LABPO1_PROSTAKAT_HPP
