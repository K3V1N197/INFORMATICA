
#include "studente.h"
#include <iostream>
#include <string>
using namespace std;

studente::studente(int matricola = 0, string cognome, int voto=0)
{
    this->matricola = matricola;
    this->cognome = cognome;
    for (int i = 0; i < 8; i++)
    {
        voti[i] = voto;
    }
}
~studente::studente();
void studente::setmatricola(int x)
{
    matricola = x;
}
void studente::setcognome(string x)
{
    cognome = x;
}

void studente::setvoti(int x)
{
    for (int i = 0; i < 8; i++)
    {
        voti[i] = x;
    }
}
int studente::getmatricola()
{
    return matricola;
}
int studente::getcognome()
{
    return cognome;
}
int studente::votomaggiore()
{
    int max = voti[0];
    for (int i = 1; i < 8; i++)
    {
        if (max < voti[i])
            max = voti[i];
    }
    return max;
}
int studente::mediavoti()
{
    int somma = 0, media = 0;
    for (int i = 1; i < 8; i++)
    {
        somma += voti[i];
    }
    media = somma / 8;
    return media;
}
