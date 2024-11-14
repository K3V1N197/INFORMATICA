#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void carica (int []);
void stampa (int []);
void ordina (int []);
void trovaMax (int []);
void trovaMin (int []);
int ricercaElemento(int [], int);

int main()
{
	int v[N], r, x;
	system("color 3"); //colore testo blu
	srand(time(NULL));
	
	carica (v);
	stampa (v);
	trovaMax (v);
	trovaMin (v);
	ordina (v);
	printf ("\ninserisci valore per ricerca indice: ");
	scanf("%d", &x);
    r=ricercaElemento(v, x);
    printf ("corrispondenza indice: %d", r);
}

void carica (int v[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v[i]= rand() % 100;
	}
}

void ordina (int v[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v[i]= rand() % 100;
	}
}

void stampa (int v[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		printf("%2d ",i+1);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{	
	
		printf("%2d ",v[i]);
	}
	printf("\n");
}

void trovaMax (int v[])
{
	int i,max=v[0];
	for(i=1;i<N;i++)
	{	
		if (max<v[i])
			max=v[i];
	}
	printf("\nil numero piu' grande e' %d", max);
}

void trovaMin (int v[])
{
	int i,min=v[0];
	for(i=1;i<N;i++)
	{	
		if (min>v[i])
			min=v[i];
	}
	printf("\nil numero piu' piccolo e' %d", min);
}

int ricercaElemento(int v[], int x)
{
	int i;
	for(i=0;i<=N;i++)
	{
		if(v[i]==x)
			return i;
	}
	return -1;
}





