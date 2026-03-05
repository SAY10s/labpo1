//
// Created by Nikodem Majzner on 05/03/2026.
//

#ifndef LABPO1_FABRYKAFIGUR_HPP
#define LABPO1_FABRYKAFIGUR_HPP
#include "FiguraPlaska.hpp"

class FabrykaFigur {
public:
    static FiguraPlaska *createKolo(double r);

    static FiguraPlaska *createTrojkat(double a, double b, double c);

    static FiguraPlaska *createProstakat(double a, double b);
};

#endif //LABPO1_FABRYKAFIGUR_HPP
