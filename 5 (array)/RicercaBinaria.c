#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void caricaRandom(int []);
void ordina(int []);
int ricercaBinaria(int [], int x);

int main() 
{
    int v[N], indice, cerca;
    
    srand(time(NULL));
    caricaRandom(v);
    
    ordina(v);
  	
  	printf("inserisci un numero per la ricerca: " );
  	scanf("%d", cerca);
  	
    indice = ricercaBinaria(v, cerca);
    
    if (indice != -1)
        printf("Il numero %d è presente all'indice %d.\n", cerca, indice);
    else {
        printf("Il numero %d non è presente nel vettore.\n", cerca);
    }
    return 0;
}
//genera casualmente numeri compresi fra 10 e 1000
void caricaRandom(int v[]) 
{
    for (int i=0; i<N; i++) {
        v[i] = rand() % 991 + 10; //Genera numeri casuali tra 10 e 1000
    }
    printf("vettore generato casualmente\n");
}
//ordina il vettore in modo crescente
void ordina(int v[]) 
{
    for (int i=0; i< N-1; i++) 
	{
        for (int j=0; j < N-i-1; j++) 
		{
            if (v[j] > v[j + 1]) 
			{
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    printf("vettore ordinato\n");
}
//la funzione restituisce -1 se il parametro x non è presente nel vettore altrimenti restituisce l'indice della posizione in cui è stato trovato
int ricercaBinaria(int v[], int x)
{
    int i = 0; //inizializza l'indice sinistro all'inizio del vettore
    int j = N - 1; //inizializza l'indice destro alla fine del vettore

    while (i <= j) //continua finché l'indice sinistro è minore o uguale all'indice destro
	{ 
        int mid = i + (j - i) / 2; //calcola l'indice di mezzo
        if (v[mid] == x) 
            return mid; //restituisce l'indice in cui è stato trovato x
        else if (v[mid] < x)
		{
          	i = mid + 1; // Imposta l'indice sinistro al successivo elemento
        } 
		else 
		{ 
            j = mid - 1; // Imposta l'indice destro al precedente elemento
        }
    }

    return -1; //se x non è stato trovato nel vettore, restituisci -1
}

