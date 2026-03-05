//
// Created by Nikodem Majzner on 05/03/2026.
//

#include "FabrykaFigur.hpp"

#include "Kolo.hpp"
#include "Prostakat.hpp"
#include "Trojkat.hpp"

FiguraPlaska *FabrykaFigur::createKolo(double r) {
    return new Kolo(r);
}

FiguraPlaska *FabrykaFigur::createTrojkat(double a, double b, double c) {
    return new Trojkat(a, b, c);
}

FiguraPlaska *FabrykaFigur::createProstakat(double a, double b) {
    return new Prostokat(a, b);
}
