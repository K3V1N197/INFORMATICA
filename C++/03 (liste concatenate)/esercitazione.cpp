#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *next;
};

Nodo *Inserimentointesta(Nodo *s);
Nodo *Inserimentoincoda(Nodo *s);
void Stampa(Nodo *s);
Nodo *Cancellazioneintesta(Nodo *s);
Nodo *Cancellazioneincoda(Nodo *s);
Nodo *Ricerca(Nodo *s, int);
int Conta(Nodo *s);

int main()
{
    Nodo *s = nullptr;
    Nodo *d = nullptr;
    int a;

    cout << "Inserimento in testa : " << endl;
    s = Inserimentointesta(s);
    s = Inserimentointesta(s);
    s = Inserimentointesta(s);
    Stampa(s);

    cout << "Cancellazione in testa : " << endl;
    s = Cancellazioneintesta(s);
    s = Cancellazioneintesta(s);
    Stampa(s);

    cout << "Inserimento in coda : " << endl;
    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    Stampa(s);

    cout << "Cancellazione in coda : " << endl;
    s = Cancellazioneincoda(s);
    Stampa(s);

    cout << "Inserisci il valore da cercare : " << endl;
    cin >> a;
    d = Ricerca(s, a);

    if (d != nullptr) // Ricorda
    {

        cout << "Elemento trovato : " << a << endl;
    }

    else
    {
        cout << "Elemento non trovato : " << a << endl;
    }

    int Cont = Conta(s);
    cout << "Numero volte dei nodi : " << Cont << endl;

    return 0;
}

Nodo *Inserimentointesta(Nodo *s)
{
    Nodo *p = new Nodo;
    p->info = 3;       
    p->next = s;

    return p;
}

Nodo *Inserimentoincoda(Nodo *s)
{
    Nodo *p = new Nodo;
    p->info = 4;
    p->next = nullptr;

    if (s == nullptr)
    {
        return p;
    }

    Nodo *aux = s;

    while (aux->next != nullptr)
    {
        aux = aux->next;
    }

    aux->next = p;

    return s;
}

void Stampa(Nodo *s)
{

    Nodo *aux = s;

    while (aux != nullptr)
    {

        cout << aux->info << endl;
        aux = aux->next;
    }
}

Nodo *Cancellazioneintesta(Nodo *s)
{
    Nodo *aux = s;

    if (s == nullptr)
    {
        return nullptr;
    }

    if (s->next == nullptr)
    {
        delete s;
        return nullptr;
    }

    if (aux->next != nullptr)
    {

        aux = aux->next;
    }

    delete s;
    return aux;
}

Nodo *Cancellazioneincoda(Nodo *s)
{

    Nodo *aux = s;
    Nodo *prev = nullptr;

    if (s == nullptr)
    {
        return nullptr;
    }

    if (s->next == nullptr)
    {
        delete s;
        return nullptr;
    }

    while (aux->next != nullptr)
    {
        prev = aux;
        aux = aux->next;
    }

    delete aux;

    prev->next = nullptr;

    return s;
}

Nodo *Ricerca(Nodo *s, int valore)
{
    Nodo *aux = s;

    if (aux->info == valore)
    {
        return aux;
    }

    while (aux->next != nullptr)
    {
        aux = aux->next;

        if (aux->info == valore) // Ricorda
        {
            return aux;
        }
    }
    return nullptr;
}

int Conta(Nodo *s)
{
    int cont = 0;

    Nodo *aux = s;

    while (aux != nullptr)
    {
        cont++;
        aux = aux->next;
    }
    return cont;
}