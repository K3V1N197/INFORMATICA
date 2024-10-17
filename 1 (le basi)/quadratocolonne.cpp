/*
Panetta Kevin
classe: 3H
Stampare un quadrato di 3 righe e 5 colonne col carattere letto
*/

#include <stdio.h>

int main() 
{
	//VARIABILI
    int a, b, c, x, risultato;

	//INPUT
    printf("Inserisci il coefficiente a: ");
    scanf("%d", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%d", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%d", &c);
    printf("Inserisci il valore di x: ");
    scanf("%d", &x);
    
	//ELABORAZIONE
    risultato = a * x * x + b * x + c;

	//OUTPUT
    printf("Il valore del polinomio in x=%d e' %d", x, risultato);

    return 0;
}

