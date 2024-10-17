/*
Panetta Kevin
classe: 3H
Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro massimo comune divisore utilizzando l'algoritmo di Euclide. 
*/

#include <stdio.h> 

int mcd(int, int);

int main() 
{
	int a, b, ris;
	
	printf("inserisci primo numero: ");
	scanf ("%d", &a);
	printf("inserisci secondo numero: ");
	scanf ("%d", &b);
	
	ris = mcd(a, b);
	printf("mcd = %d", ris);
		
}

int mcd(int x ,int y)
{
	int resto;
	
	while (y!=0)
	{
		resto = x % y; 
		x = y;
		y=resto;
	}
	
	return x;
}
