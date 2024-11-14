/*
Panetta Kevin
classe: 3H
Scrivere un programma che, richiesti due numeri interi qualsiasi, segnali se i due numeri sono uguali; in caso contrario indichi il minore e il maggiore
*/

#include <stdio.h>

int main ()
{
	int a, b;
	
	printf ("scrivi il primo numero intero\n");
	scanf ("%d, %d", &a);
	printf ("scrivi il secondo numero intero\n");
	scanf ("%d", &b);
	
	if (a==b)
	{
		printf ("i due numeri sono uguali");
	}
	else if (a>b)
	{
		printf ("il numero maggiore e': %d \nil numero minore e': %d", a, b);
	}
	else
	{
		printf ("il numero maggiore e': %d \nil numero minore e': %d", b, a);
	}
	
	return 0;
}
