/*	
Panetta Kevin
classe: 3H
Scrivere un programma in C che chiesti 2 numeri interi all’utente, stampi sul monitor tutti i numeri compresi fra i 2. Es. se i numeri inseriti sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12
*/

#include <stdio.h>

int main ()
{
	int i, a, b;

	printf ("inserisci il primo numero\n");
	scanf ("%d", &a);
	printf ("inserisci il secondo numero\n");
	scanf ("%d", &b);
	
	printf ("i numeri compresi tra %d e %d sono: \n",a,b);

	for (i=a;i<=b;i++)
	{
		printf("%d\n", i);
	} 

	return 0;	
}

