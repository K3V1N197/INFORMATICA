/*
Panetta Kevin
classe: 3H
Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento dei dati.
*/

#include <stdio.h>

int main()
{
    int numero, somma, cont;
    float media;
    
    cont = 0;
    somma = 0;

    printf("Inserisci una serie di numeri, per terminare digita 0:\n");

    do 
	{
        scanf("%d", &numero);

        if (numero != 0) {
            somma += numero;
            cont++;
        }
    } while (numero != 0);

    media = (float)somma / cont;
    printf("La media aritmetica dei numeri inseriti e' %.2f\n", media);

    return 0;
}

