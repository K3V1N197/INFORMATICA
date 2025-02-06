#include <iostream>
#include <string>
using namespace std;

class rettangolo
{
private:
    int base;
    int altezza;

public:
    rettangolo(int base = 0, int altezza = 0)
    {
        this->base = base;
        this->altezza = altezza;
    }

    void setbase(int x) { base = x; }
    void setaltezza(int x) { altezza = x; }
    int getarea() { return base * altezza; }
    int getperimetro() { return (base + altezza) * 2; }

    void stampa(string nome)
    {   
        cout << "Il tuo nome è " << nome << endl;
        cout << "la base è " << base << endl;
        cout << "l'altezza è " << altezza << endl;
        cout << "il perimetro è " << getperimetro() << endl;
        cout << "l'area è " << getarea() << endl;
    }
};


int main()
{
    string nome;
    cout << "ciao, inserisci il tuo nome:" << endl;
    cin >> nome;

    rettangolo r1(5,10);

    r1.stampa(nome);

    return 0;
}