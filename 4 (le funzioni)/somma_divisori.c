/*
Panetta Kevin
classe: 3H
Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero e restituisce la somma dei suoi divisori.
*/

#include <stdio.h> 

int somma_divisori (int);

int main() 
{
	int num;
	
	printf("inserisci un numero intero: ");
	scanf ("%d", &num);

	printf("somma divisori di %d = %d",num, somma_divisori (num));
		
}

int somma_divisori (int x)
{
	int div=1, somma=0;
	
	while (div <= x/2)
	{	
		if (x%div == 0)
		{
			somma+=div;
		}
		div++;
	}
	
	return somma;
}
