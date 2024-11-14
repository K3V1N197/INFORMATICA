/*
Panetta Kevin
classe: 3H
Scrivere la funzione void stampa_divisori(int num) che stampi a schermo i suoi divisori e la loro somma.
*/

#include <stdio.h>

int pari_dispari(int);

int main() 
{
    int num;
    
    printf("Inserisci un numero: ");
    scanf("%d", &num);

    printf("Il numero e' %d\n", pari_dispari(num));

    return 0;
}

int pari_dispari(int x) 
{
    while (x >= 2)
	{
        x -= 2;
    }

    if (x == 0)
        return 0; // pari
    else {
        return 1; // dispari
    }
}


