/*
Panetta Kevin
classe: 3H
Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area. 
*/

#include <stdio.h> 

int area_rettangolo (int,int);

int main() 
{
	int base, altezza;
	
	printf("inserisci base: ");
	scanf ("%d", &base);
	printf("inserisci altezza: ");
	scanf ("%d", &altezza);
	
	printf("area = %d", area_rettangolo(base, altezza));
	
	return 0;
}

int area_rettangolo (int x ,int y)
{
	int area;
	
	area = x*y;
	
	return area;
}
