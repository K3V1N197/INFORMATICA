/*
Panetta Kevin
classe: 3H
letti 3 numeri interi da tastiera  visualizzare il più grande utilizzando una variabile aggiuntiva
*/

#include <stdio.h> //printf, scanf

int main() 
{
  //variabili
  int a, b, c, max;
  
  //input
  printf("Inserisci il primo nunero ");
  scanf("%d", &a);
  printf("Inserisci il secondo numero ");
  scanf("%d", &b);
  printf("Inserisci il terzo numero ");
  scanf("%d", &c);
  
  //calcolo numero maggiore
  if (a>b)
   	 { max=a;
	 }
  else { max=b;
	      }
  if (c>max)
     { max=c;
	 }
  else { }
  
  //output 
  printf("numero maggiore = %d", max);
 
  //terminiamo il programma
  return 0;
}

