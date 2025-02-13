#include <iostream>
#include "quadrilatero.h"
using namespace std;

quadrilatero::quadrilatero(int l1, int l2, int l3, int l4) {
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}

quadrilatero::~quadrilatero() {
    cout << "Distruttore eseguito." << endl;
}

void quadrilatero::getLati() {
    cout << "I lati sono: " << l1 << " " << l2 << " " << l3 << " " << l4 << endl;
}

int quadrilatero::calcolaPerimetro() {
    return l1 + l2 + l3 + l4;
}

void quadrilatero::stampa() {
    getLati();
    cout << "Il perimetro è: " << calcolaPerimetro() << endl;
}
