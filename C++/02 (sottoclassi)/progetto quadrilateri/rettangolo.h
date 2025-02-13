#ifndef RETTANGOLO_H
#define RETTANGOLO_H
#include "quadrilatero.h"
#include <string>
using namespace std;

class rettangolo: public quadrilatero
{
private:
    string colore;
public:
    rettangolo r1 (int base, int altezza);
    int calcolaArea();
};

#endif