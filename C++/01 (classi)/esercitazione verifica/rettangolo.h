#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include <iostream>
using namespace std;

class rettangolo
{
private:
    int base; 
    int altezza;

public:
    rettangolo(); // Costruttore senza parametri
    rettangolo(int base, int altezza=4); // Costruttore con parametri

    void setbase(int x);
    void setaltezza(int x);
    int getarea();
    int getperimetro();
    void stampa(string nome);
};

#endif
