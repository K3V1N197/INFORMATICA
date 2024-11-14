/*
Panetta Kevin
classe: 3H
Scrivere una funzione che trovi le coppie di numeri amici tra i numeri compresi da 0 a 1500 e li visualizzi sullo schermo. Un numero amico è un numero intero per il 
quale la somma dei divisori propri (escluso il numero stesso) è uguale ad un altro numero intero, chiamato numero amico. Ad esempio, i numeri 220 e 284 sono amici 
perché la somma dei divisori propri di 220 è 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284 e la somma dei divisori propri di 284 è 1 + 2 + 4 + 71 + 142 = 220.
*/

#include <stdio.h>

int main() 
{
	int num1, num2;
    for (num1=1; num1 <= 1500; num1++) 
	{
        num2 = somma_divisori(num1);											
        if (num1 != num2 && num2 <= 1500 && somma_divisori(num2) == num1) 	// se num2 è diverso da num1, è minore di 1500 e la somma dei suoi divisori è uguale a quella di num1
		{																			
            printf("%d e %d sono numeri amici\n", num1, num2);				// stampo i 2 numeri amici
        }																		 
    }
}

int somma_divisori(int x) 
{
    int i=1, somma=0;
    
    for (i; i <= x/2; i++)													//trovo i divisori di num2 e li sommo
	{
        if (x%i == 0) {
            somma += i;
        }
    }
    return somma;
}
