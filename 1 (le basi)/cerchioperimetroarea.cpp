/********************************************
Kevin Panetta
calcola il perimetro e l'area di un cerchio
********************************************/

#include "stdio.h"
#define PIGRECO 3.14

int main()
{
		// dichiarazione variabili
	float raggio;	     	//input
	float perimetro, area;	//output
		// operazioni
	printf("inserisci la misura del raggio\n");
	scanf("%f", &raggio);
	perimetro=2*PIGRECO*raggio;
	area=PIGRECO*raggio*raggio;
		// visualizzazione risultati
	printf("il perimetro del cerchio: %f\n", perimetro);
	printf("l'area del cerchio di raggio %f: %f", raggio, area);
	return 0;
}

