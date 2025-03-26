#include <iostream>
using namespace std;

struct nodo
{
    int valore;
    nodo *next;
};

nodo *inserimentointesta(nodo *s, int valore);
nodo *inserimentoincoda(nodo *s, int valore);
nodo *cancellazioneintesta(nodo *s);
nodo *ricerca(nodo *s, int num);
void stampanodo(nodo *s);

int main()
{
    nodo *s = nullptr;

    cout << "inserimento in testa:" << endl;
    for (int i = 0; i < 3; i++)
    {
        s = inserimentointesta(s, i);
    }
    stampanodo(s);

    cout << "inserimento in coda:" << endl;
    for (int i = 0; i < 3; i++)
    {
        s = inserimentoincoda(s, i);
    }
    stampanodo(s);

    cout << "cancellazione in testa:" << endl;
    s = cancellazioneintesta(s);
    stampanodo(s);

    cout << "inserisci numero da cercare: ";
    int num;
    cin >> num;
    int r = ricerca(s, num);
}

void stampanodo(nodo *s)
{
    nodo *aux = s;
    while (aux != nullptr)
    {
        cout << aux->valore << endl;
        aux = aux->next;
    }
}

nodo *inserimentointesta(nodo *s, int valore)
{
    nodo *p = new nodo;
    p->valore = valore;
    p->next = s;

    return p;
}

nodo *inserimentoincoda(nodo *s, int valore)
{
    nodo *p = new nodo;
    p->valore = valore;
    p->next = nullptr;

    if (s == nullptr)
    {
        return p;
    }

    nodo *aux = s;

    while (aux->next != nullptr)
    {
        aux = aux->next;
    }

    aux->next = p;

    return s;
}

nodo *cancellazioneintesta(nodo *s)
{
    nodo *aux = s;

    if (s == nullptr)
    {
        return nullptr;
    }

    if (s->next == nullptr)
    {
        delete s;
        return nullptr;
    }

    aux = aux->next;

    delete s;
    return aux;
}

nodo *ricerca(nodo *s, int num)
{
    nodo *aux = s;

    if (aux == nullptr){
        return nullptr;
    }

    if (aux->valore == num)
    {
        return aux;
    }

    while (aux->next != nullptr)
    {
        aux = aux->next;

        if (aux->valore == num)
        {
            return aux;
        }
    }
    return nullptr;
}
