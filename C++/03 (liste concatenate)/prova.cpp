#include <iostream>
using namespace std;

struct nodo {
    int valore;
    nodo* next;
};
int cont=1;
nodo* inserisciTesta (nodo* s);
nodo* inserisciCoda (nodo* s);
void stampa (nodo* s);

int main ()
{
    nodo* s = nullptr;    
    for (int i=0; i<3; i++) {
        s = inserisciTesta(s);
    }
    for (int i=0; i<3; i++) {
        s = inserisciCoda(s);
    }
    stampa(s);
}
nodo* inserisciTesta (nodo* s)
{
    nodo* p = new nodo;   
    p->valore = cont;
    cont++;
    p->next = s;  
    return p;
}
nodo* inserisciCoda (nodo* s)
{
    
}
void stampa (nodo* s)
{
    nodo* aux = s;
    while (aux != nullptr){
        cout << aux->valore << endl;           
        aux = aux-> next;    
    }
}