/*
file: ciaomondo
autore: Panetta Kevin
classe: 3H
data: 27/09/2023
*/
#include <stdio.h> //printf, scanf

int main()
{
//dichiariamo La variabile a
int a;

//scrivere a schermo un messagio 
printf ("Inserisci un numero intero");

//Lettura da tastiera di un intero in base 10
scanf ("%d", &a);

//stampiamo a schermo un messaggio contenente
//il valore del numero inserito da tastiera
printf ("Hai inserito il numero %d\n\n", a) ;

//terminiamo il programma
return 0;
}

