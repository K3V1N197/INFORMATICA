#include <iostream>

using namespace std;

typedef struct Nodo
{
  int info;
  Nodo *next;
} Nodo;

Nodo *Inserimentointesta(Nodo *s, int);
Nodo *Inserimentoincoda(Nodo *s);
void Stampa(Nodo *s);
Nodo *Cancellazioneintesta(Nodo *s);
Nodo *Cancellazioneincoda(Nodo *s);
Nodo *Ricerca(Nodo *s, int);
int Conta(Nodo *s);
void Rimuoviduplicati(Nodo *s);  

int main()
{
  Nodo *s = nullptr; // Testa (inizialmente vuota)
  Nodo *d = nullptr;
  int a;

  cout << "Inserisci valore per inserimento in testa : " << endl;
  cin >> a;
  s = Inserimentointesta(s, a);

  cout << "Inserisci valore per inseriemnto in testa : " << endl;
  cin >> a;
  s = Inserimentointesta(s, a);

  cout << "Inserisci valore per inserimento in testa  : " << endl;
  cin >> a;

  cout << "Inserimento a testa : " << endl;
  s = Inserimentointesta(s, a);
  Stampa(s);

  int Cont = Conta(s);
  cout << "Numero volte dei nodi : " << Cont << endl;

   cout << "Numeri duplicati eliminati : " << endl;
   Rimuoviduplicati(s);
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

  if (d != nullptr)
  {

    cout << "Elemento trovato : " << a << endl;
  }

  else
  {
    cout << "Elemento non trovato : " << a << endl;
  }

  return 0;
}

Nodo *Inserimentointesta(Nodo *s, int valore)
{
  Nodo *p = new Nodo;
  p->info = valore;
  p->next = s;

  return p;
}

Nodo *Inserimentoincoda(Nodo *s)
{
  Nodo *p = new Nodo; // Creazione di un nodo in cui punta p
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
    delete s; // Eliminazione
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

    if (aux->info == valore)
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

void Rimuoviduplicati(Nodo *s)
{
  Nodo *aux = s;

  while(aux != nullptr)
  {       
    Nodo *prev = aux -> next;
    while(prev != nullptr)
    {
      if(aux->info == prev->info)
      {
       Nodo *temp = prev;
       prev = prev->next;
       delete temp;
       aux -> next = prev;
      }
      else
      {
        prev = prev ->next;
      }
    }
    aux = aux ->next;
  }
}

