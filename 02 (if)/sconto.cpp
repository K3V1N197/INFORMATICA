/*
Panetta Kevin
classe: 3H
Un negoziante per ogni spesa di importo superiore a 50 € effettua uno sconto del 5%, del 10% per ogni spesa superiore a 100 €. 
Scrivere un programma che richieda all'utente l'ammontare della spesa e visualizzi quindi l'importo effettivo da pagare. 
*/

#include <stdio.h>

int main ()
{
	int importo, sconto5, sconto10;
	
	printf ("scrivi l'importo da pagare\n");
	scanf ("%d", &importo);
	
	sconto5 = (importo * 5) /100;
	sconto10 = (importo * 10) /100;
	
	if (importo >= 50 && importo <=100)
	{
		printf ("si ha uno sconto del 5%, quindi equivalente a %d euro", sconto5);
	}
	else if (importo>100)
	{
		printf ("si ha uno sconto del 10%, quindi equivalente a %d euro", sconto10);
	}
	else
	{
		printf ("la spesa e' inferiore a 50 euro quindi non si ha nessuno sconto");
	}
	
	return 0;
}
