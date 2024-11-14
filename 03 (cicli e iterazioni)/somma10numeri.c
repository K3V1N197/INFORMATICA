/*	
Panetta Kevin
classe: 3H
Scrivere un programma C che letti 10 interi da tastiera li visualizzi tutti (nel ciclo) e stampi la loro somma (fuori dal ciclo). Si usi il ciclo for
*/

#include <stdio.h>
#define N 10

int main ()
{
	int i, num;
	float somma=0;
	
	printf ("inserisci 10 numeri\n");

	for (i=0;i<N;i++)
	{
		scanf ("%d", &num);
		somma+=num;
	} 
	printf ("la somma e' %.2f \n", somma);
	
	return 0;	
}

