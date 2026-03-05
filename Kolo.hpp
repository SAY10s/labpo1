//
// Created by Nikodem Majzner on 03/03/2026.
//

#ifndef LABPO1_KOLO_HPP
#define LABPO1_KOLO_HPP

#include "FiguraPlaska.hpp"


class Kolo : public FiguraPlaska {
    double r;
    static int licznik;
    friend class FabrykaFigur;

    Kolo(double r);

protected:
    void Wypisz(std::ostream &out) const override;

public:
    double GetR() const;

    void SetR(double r);

    double Obwod() const override;

    double Pole() const override;

    ~Kolo() override;
};

#endif //LABPO1_KOLO_HPP
