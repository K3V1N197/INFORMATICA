/* 
	nome: Kevin
	data: 14/03/2024
	
	scrivi un programma che genera casualmente 30 numeri e li memorizza 
	in due vettori: il primo deve contenere solo i numeri pari mentre 
	il secondo solo i numeri dispari.
	
	1. azzero entrambi i vettori
	2. faccio il menu con le funzione
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

void azzera (int [],int []);
void genera (int [], int []);
void stampa (int []);


int main ()
{
	srand(time(NULL));
	int v1[N], v2[N], scelta;
	
	azzera (v1, v2);
	
do	{

	printf("\n+-----------------------------+\nSeleziona un programma:\n");
    printf("1.  stampa vettore 1\n");
    printf("2.  stampa vettore 2\n");
    printf("2.  genera numeri\n");
    printf("0. Esci\n+-----------------------------+\n");
    
	scanf("%d", &scelta);
	switch (scelta) 
	{
        case 1:
           	stampa(v1);
            break;			
		case 2:
           	stampa(v2);
            break;
        case 3:
           	genera (v1,v2);
            break;
        case 0:
            printf("Uscita dal programma.\n");
            break;
        default:
            printf("Scelta non valida. Riprova.\n");
            break;
	}
	}while(scelta!=0);
}

void azzera(int v1[],int v2[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v1[i]=0;
		v2[i]=0;
	}
}

void stampa (int v1[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf ("%3d",i+1);	
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf ("%3d",v1[i]);	
	}
	printf("\n");
}

void genera (int v1[], int v2[])
{
	int i,contp=0,contd=0, num;
	for (i=0; i<N; i++)
	{
		num = rand()%100+1;
		if(num%2 == 0){
			v1[contp]=num;
			contp++;
		}
		else{
			v2[contd]=num;
			contd++;
		}		
	}	
}





