#include <iostream>
#include <cmath>
#include "rettangolo.h"
using namespace std;

rettangolo::Rettangolo()
    : base(0), altezza(0) {}

rettangolo::Rettangolo(double base)
    : base(base), altezza(base) {}

rettangolo::Rettangolo(double base, double altezza)
    : base(base), altezza(altezza) {}

// Distruttore
rettangolo::~Rettangolo() {cout << "Hai chiamato il distruttore." << endl;}

void rettangolo::setBase(double x) { base = x; }
void rettangolo::setAltezza(double x) { altezza = x; }
double rettangolo::getBase() { return base; }
double rettangolo::getAltezza() { return altezza; }
double rettangolo::getPerimetro() { return (base * 2) + (altezza * 2); }
double rettangolo::getArea() { return base * altezza; }
double rettangolo::getDiagonale() { return sqrt((base * base) + (altezza * altezza)); }

void rettangolo::stampa()
{
    cout << "Base:" << getBase() << endl;
    cout << "Altezza:" << getAltezza() << endl;
    cout << "Perimetro:" << getPerimetro() << endl;
    cout << "Area:" << getArea() << endl;
    cout << "Diagonale:" << getDiagonale() << endl;
}