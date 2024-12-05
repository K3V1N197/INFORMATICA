/*
Panetta Kevin
classe: 3H
scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
*/

#include <stdio.h>

int main ()
{
	int numero, a;
	
	printf ("scrivi un numero intero\n");
	scanf ("%d", &a);
	
	numero = 1;
	printf ("i divisori sono:\n");
	
	while (a>0)
	{
		if  (a%numero==0)
		{
			printf ("%d \n", numero);
		}
		{}
		numero = numero + 1;
	}
	return 0;
}
