/*
Panetta Kevin
classe: 3H
Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
*/

#include <stdio.h> 

int main() 
{
	int a, b, cont;
	  
	cont = 0;
	a = 15;
	b = 0;
	
	printf("le ordinate di 15 sono:\n");
	
	do
	{
		a --;
		b ++;
		printf("(%d, %d)\n", b, a);
		cont ++;
	}
	while (cont != 15);
	
	return 0;
}


