#include <iostream>
#include "quadrilatero.h"
#include "rettangolo.h"
#include <string>
using namespace std;

rettangolo::rettangolo(int base, int altezza, string colore = "rosso") : quadrilatero(base,altezza,base,altezza)
{
    this -> colore = colore;
}

int rettangolo::calcolaPerimetro()
{
    return (l1+l2)*2;
}
int rettangolo::calcolaArea()
{
    return l1*l2;
}
