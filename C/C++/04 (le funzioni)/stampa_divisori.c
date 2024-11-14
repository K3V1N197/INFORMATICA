/*
Panetta Kevin
classe: 3H
Scrivere la funzione void stampa_divisori (int num) che stampi a schermo i suoi divisori e la loro somma.
*/

#include <stdio.h> 

void stampa_divisori (int);

int main() 
{
	int num;
	
	printf("inserisci un numero intero: ");
	scanf ("%d", &num);

	stampa_divisori (num);
		
}

void stampa_divisori (int x)
{
	int i=1, somma=0;
	
	printf ("divisori di %d: ",x);
	for (i; i <= x/2; i++)
	{	
		if (x%i == 0)
		{
			printf ("%d ",i);
			somma+=i;
		}
	}
	printf("\nsomma divisori = %d",somma);
}
