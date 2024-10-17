/*
Panetta Kevin
classe: 3H
Scrivere un programma che, richiesti in ingresso due valori interi distinti, ne stampi a scherm o il maggiore
*/

#include <stdio.h>

int main() 
{
	int a,b;
	
	printf ("inserisci il primo valore\n");
	scanf ("%d", &a);
	printf ("inserisci il primo secondo\n");
	scanf ("%d", &b);
	
	if (a>b)
		{printf ("il numero maggiore e' %d", a);
	}
	else 
		{printf ("il numero maggiore e' %d", b);
	}	

	return 0;
}

