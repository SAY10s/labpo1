//
// Created by Nikodem Majzner on 03/03/2026.
//

#include "FiguraPlaska.hpp"
std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura)
{
    figura.Wypisz(os);
    return os;
}
FiguraPlaska::~FiguraPlaska() {
}
