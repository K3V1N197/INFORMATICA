#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *prossimo;

    Nodo(int valore)
    {
        dato = valore;
        prossimo = nullptr;
    }
};

class ListaConcatenata
{
private:
    Nodo *testa;

public:
    ListaConcatenata() { testa = nullptr; }

    void inserisciInTesta(int valore)
    {
        Nodo *nuovoNodo = new Nodo(valore);
        nuovoNodo->prossimo = testa;
        testa = nuovoNodo;
    }

    void inserisciInCoda(int valore)
    {
        Nodo *nuovoNodo = new Nodo(valore);
        if (testa == nullptr)
        {
            testa = nuovoNodo;
            return;
        }
        Nodo *temp = testa;
        while (temp->prossimo)
            temp = temp->prossimo;
        temp->prossimo = nuovoNodo;
    }

    void eliminaNodo(int valore)
    {
        if (!testa)
            return;
        if (testa->dato == valore)
        {
            Nodo *temp = testa;
            testa = testa->prossimo;
            delete temp;
            return;
        }
        Nodo *temp = testa;
        while (temp->prossimo && temp->prossimo->dato != valore)
            temp = temp->prossimo;
        if (temp->prossimo)
        {
            Nodo *daEliminare = temp->prossimo;
            temp->prossimo = daEliminare->prossimo;
            delete daEliminare;
        }
    }

    void visualizza()
    {
        Nodo *temp = testa;
        while (temp)
        {
            cout << temp->dato << " -> ";
            temp = temp->prossimo;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    ListaConcatenata lista;
    lista.inserisciInTesta(3);
    lista.inserisciInTesta(2);
    lista.inserisciInTesta(1);
    lista.visualizza();

    lista.inserisciInCoda(4);
    lista.inserisciInCoda(5);
    lista.visualizza();

    lista.eliminaNodo(3);
    lista.visualizza();

    return 0;
}
