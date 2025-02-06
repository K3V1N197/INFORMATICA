#include <iostream>
#include "rettangolo.h"
using namespace std;

int main()
{
    string nome;
    cout << "Ciao, inserisci il tuo nome:" << endl;
    cin >> nome;

    // Creazione di due rettangoli con diversi costruttori
    rettangolo r1; // Usa il costruttore senza parametri (valori di default)
    rettangolo r2(8 ); // Usa il costruttore con parametri personalizzati

    cout << "\nDati del primo rettangolo (default):" << endl;
    r1.stampa(nome);

    cout << "\nDati del secondo rettangolo (personalizzato):" << endl;
    r2.stampa(nome);

    return 0;
}
