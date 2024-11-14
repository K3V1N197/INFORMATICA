/*
Panetta Kevin
classe: 3H
Scrivere un programma che letto un numero intero da tastiera, stampi tutti  i suoi divisori (stampa nel ciclo!) e quindi visualizzi una sola volta (fuori dal ciclo) se è un numero primo o non lo è.  (preferibile uso del for)
*/

#include <stdio.h>

int main ()
{
	int a, cont=2, primo=0;
	
	printf ("scrivi un numero intero\n");
	scanf ("%d", &a);
	
	printf ("i divisori sono:\n");
	
	while (cont<a)
	{	
		if  (a%cont==0)
		{
			printf ("%d \n", cont);
			primo++;
		}
		cont++;
	} 
	
	if (primo==0)
	{
		printf ("il numero %d: e' primo",a);
	}
	else
	{
		printf ("il numero %d: non e' primo",a);
	}

	return 0;
}
