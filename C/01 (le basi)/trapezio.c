/*
Panetta Kevin
classe: 3H
Scrivi un programma che calcola l’area e il perimetro di un trapezio dopo aver letto i dati necessari
*/

#include <stdio.h> //printf, scanf

int main() 
{
  //variabili
  int baseminore, basemaggiore, lato, altezza;
  int perimetro;
  
  //input
  printf("Inserisci la base minore ");
  scanf("%d", &baseminore);
  printf("Inserisci la base maggiore ");
  scanf("%d", &basemaggiore);
  printf("Inserisci il lato ");
  scanf("%d", &lato);
  printf("Inserisci l'altezza ");
  scanf("%d", &altezza);
  
  //elaborazione: perimetro e area
  perimetro= basemaggiore + baseminore + 2*lato;
  
  //output 
  printf("perimetro trapezio= %d", perimetro);
 
  //terminiamo il programma
  return 0;
}

