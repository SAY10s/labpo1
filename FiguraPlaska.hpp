//
// Created by Nikodem Majzner on 03/03/2026.
//

#ifndef LABPO1_FIGURAPLASKA_HPP
#define LABPO1_FIGURAPLASKA_HPP

#include <iostream>
class FiguraPlaska {
protected:
    virtual void Wypisz(std::ostream& out) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura)
    ;
public:
    virtual double Pole() const = 0;
    virtual double Obwod() const = 0;
    virtual ~FiguraPlaska();
};

#endif //LABPO1_FIGURAPLASKA_HPP
