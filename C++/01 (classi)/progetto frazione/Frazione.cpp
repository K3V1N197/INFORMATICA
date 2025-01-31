#include <iostream>
#include "Frazione.h"

using namespace std;

Frazione ::Frazione(int numeratore, int denominatore)
{
  this->numeratore = numeratore;
  this->denominatore = denominatore;
}

void Frazione ::Stampa()
{
  cout << "Numeratore : " << numeratore;
  cout << "Denominatore : " << denominatore;
  cout << "Frazione : " << numeratore << "/" << denominatore << endl;
}

void Frazione ::Semplifica()
{

  int a = numeratore;
  int b = denominatore;

  while (b != 0)
  {

    int resto = a % b;
    a = b;
    b = resto;
  }

  int MCD = a;
  numeratore = numeratore / MCD;
  denominatore = denominatore / MCD;
}