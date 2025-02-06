#include <iostream>
#include "rettangolo.h"
using namespace std;

// Costruttore senza parametri: assegna valori di default
rettangolo::rettangolo()
{
    base = 10;
    altezza = 5;
}

// Costruttore con parametri: assegna i valori passati dall'utente
rettangolo::rettangolo(int base, int altezza)
{
    this->base = base;
    this->altezza = altezza;
}

void rettangolo::setbase(int x) { base = x; }
void rettangolo::setaltezza(int x) { altezza = x; }
int rettangolo::getarea() { return base * altezza; }
int rettangolo::getperimetro() { return (base + altezza) * 2; }

void rettangolo::stampa(string nome)
{
    cout << "Il tuo nome è " << nome << endl;
    cout << "La base è " << base << endl;
    cout << "L'altezza è " << altezza << endl;
    cout << "Il perimetro è " << getperimetro() << endl;
    cout << "L'area è " << getarea() << endl;
}
