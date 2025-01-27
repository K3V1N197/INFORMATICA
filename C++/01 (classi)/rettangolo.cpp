#include <iostream>
#include <cmath>
using namespace std;

class Rettangolo
{
public:
    Rettangolo()
        : base(0), altezza(0) {}

    Rettangolo(double base)
        : base(base), altezza(0) {}

    Rettangolo(double base, double altezza)
        : base(base), altezza(altezza) {}

    // Distruttore
    ~Rettangolo() {
        cout << "Hai chiamato il distruttore." << endl;
    }
    
    void setBase(double x) { base = x; }
    void setAltezza(double x) { altezza = x; }
    double getBase() { return base; }
    double getAltezza() { return altezza; }
    double getPerimetro() { return (base * 2) + (altezza * 2); }
    double getArea() { return base * altezza; }
    double getDiagonale() { return sqrt((base * base) + (altezza * altezza)); }

    void stampa()
    {
        cout << "Base:" << getBase() << endl;
        cout << "Altezza:" << getAltezza() << endl;
        cout << "Perimetro:" << getPerimetro() << endl;
        cout << "Area:" << getArea() << endl;
        cout << "Diagonale:" << getDiagonale() << endl;
    }

private:
    double base, altezza;
};

int main()
{
    Rettangolo r1(5,10);

    r1.stampa();

    return 0;
}