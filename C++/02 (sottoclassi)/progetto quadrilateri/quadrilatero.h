#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class quadrilatero
{
protected:
    int l1, l2, l3, l4;
public:
    quadrilatero (int l1=5, int l2=5, int l3=5, int l4=5);
    ~quadrilatero();

    void getLati ();
    int calcolaPerimetro ();
    void stampa();
};

#endif
