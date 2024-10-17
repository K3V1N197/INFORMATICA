#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void caricaRandom (int []);
void ordina (int []);
void stampaArray (int []);
void ordinafinale (int [], int [], int []);

int main()
{
	system("color 3"); //colore testo blu
	srand(time(NULL));
	int v1[N], v2[N], v3[N*2];
	
	caricaRandom (v1);
	caricaRandom (v2);
	ordina(v1);
	ordina(v2);
	ordinafinale (v1, v2, v3);	
	stampaArray (v3);
}
//carica vettore random con numeri da 0 a 99
void caricaRandom(int v[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v[i] = rand() % 100;
	}
}
//ordina il vettore in modo crescente
void ordina(int v[]) 
{
	int i, j, temp;
    for (i=0; i< N-1; i++) 
	{
        for (j=i+1; j < N; j++) 
		{
            if (v[i]>v[j]) 
			{
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
}
//ordina il terzo vettore con i numeri del primo e secondo vettore
void ordinafinale (int v1[], int v2[], int v3[])
{ 
	int i=0, j=0, k=0;
	while (i<N && j<N)
	{
		if (v1[i] < v2[j])
		{
			v3[k]=v1[i];
			i++;
		}
		else 
		{
			v3[k]=v2[j];
			j++;
		}
		k++;
	}
	while(i<N)
	{
		v3[k]=v1[i];
		k++;
		i++;
	}
	while(j<N)
	{
		v3[k]=v1[j];
		k++;
		j++;
	}
}
//stampa il vettore
void stampaArray (int v[])
{
	int i;
	for(i=0;i<N*2;i++)
	{
		printf ("posizione %d: %d \n",i,v[i]);	
	}
}


