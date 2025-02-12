
#include "studente.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    rettangolo r1;
    rettangolo r2(10, "Rossi");
    r1.setmatricola(0);
    r1.setcognome("Panetta");
    r1.setvoti(int voto);
    r1.getmatricola();
    r1.getcognome();
    r1.votomaggiore();
    r1.mediavoti();
    r2.setmatricola(0);
    r2.setcognome("Bianchi");
    r2.setvoti(int voto);
    r2.getmatricola();
    r2.getcognome();
    r2.votomaggiore();

    r2.mediavoti();
    if (r1.mediavoti() > r2.mediavoti())
    {
        cout << "lo studente con la media maggiore è" << r1.getcognome() << endl;
    }
    else
    {
        cout << "lo studente con la media maggiore è" << r2.getcognome() << endl;
    }
    if (r1.votomaggiore() > r2.votomaggiore())
    {
        cout << "lo studente con il voto maggiore è" << r1.getcognome() << endl;
    }
    else
    {
        cout << "lo studente con il voto maggiore è" << r2.getcognome() << endl;
    }
}