#ifndef STUDENTE_H
#define STUDENTE_H
#include <string>
using namespace std;

class studente
{
private:
    int matricola;
    string cognome;
    int voti[8];

public:
    studente(int matricola = 0, string cognome, int voti[] = setvoti(0));
    ~studente();
    void setmatricola(int x);
    void setcognome(string x);
    void setvoti(int voto);
    int getmatricola();
    string getcognome();
    int votomaggiore();
    int mediavoti();
};
#endif
