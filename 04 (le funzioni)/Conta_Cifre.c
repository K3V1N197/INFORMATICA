/*
Panetta Kevin
classe: 3H
Scrivi una funzione che trovi il numero di cifre in qualsiasi intero positivo (maggiore di 0). 
Se il numero non viene passato alla funzione allora deve essere letto dalla tastiera. Ad esempio, il numero di cifre in 2534 è 4. 
*/

#include <stdio.h>
int invertire(int);
int main() 
{
    int num;
    
    printf("inserisci un numero intero: ");
    scanf("%d", &num);
    
    if (num<0){		// Controllo che il numero sia positivo
    	printf ("il numero deve essere positivo");
    	return 0;
	}
    printf("il numero e' composto da %d cifre", invertire(num));

    return 0;
}
// Funzione per contare le cifre di un intero
int invertire(int x) 
{
    int cont=0, estrai;
    while (x != 0) 
	{
		cont++;
        x /= 10;	// Rimuove l'ultima cifra dal numero originale
    }
    return cont;
}
