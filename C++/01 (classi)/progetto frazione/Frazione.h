#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione
{
private:
  int numeratore;
  int denominatore;

public:
  Frazione(int numeratore, int denominatore);

  void Stampa();
  void Semplifica();
};
#endif