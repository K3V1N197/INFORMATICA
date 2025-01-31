#include "Frazione.h"
#include <iostream>

using namespace std;

int main()
{

    int numeratore, denominatore;

    cout << "Numeratore : " << endl;
    cin >> numeratore;

    cout << "Denominatore : " << endl;
    cin >> denominatore;

    Frazione r1(numeratore, denominatore);

    r1.Stampa();
    r1.Semplifica();
}