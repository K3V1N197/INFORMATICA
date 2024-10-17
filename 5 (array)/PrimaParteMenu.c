#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void visualizzamenu ();
void azzera (int []);
void caricaUtente (int []);
void caricaRandom (int []);
void stampaArray (int []);
int ricercaElemento(int [], int);
int contaElemento(int [], int);
int trovaValoreMax (int []);
int trovaindiceMax (int []);
int trovaValoreMin (int []);
int trovaindiceMin (int []);

int main()
{
	system("color 3"); //colore testo blu
	srand(time(NULL));
	int v1[N], scelta, r, x;

	azzera (v1);

    do {
    	visualizzamenu ();

        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
               	stampaArray (v1);
                break;
			case 2:
               	caricaUtente (v1);
                break;
            case 3:
               	caricaRandom (v1);
                break;
            case 4:
            	printf ("inserisci valore per ricerca indice: ");
            	scanf("%d", &x);
            	r=ricercaElemento(v1, x);
            	printf ("corrispondenza indice: %d", r);
                break;
            case 5:
        		printf ("inserisci valore per ricerca indice: ");
            	scanf("%d", &x);
            	r=contaElemento(v1, x);
            	printf ("il numero %d e' presente %d volte", x, r);
                break;    
			case 6:
               	r=trovaValoreMax (v1);
                printf ("il valore massimo e' %d ", r);
				break;
			case 7:
               	r=trovaindiceMax (v1);
                printf ("l'indice del valore massimo e' %d ", r);
				break;
			case 8:
               	r=trovaValoreMin (v1);
                printf ("il valore minimo e' %d ", r);
				break;
			case 9:
               	r=trovaindiceMin (v1);
                printf ("l'indice del valore minimo e' %d ", r);
				break;
			case 10:
               	system("CLS");
				break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
    } while (scelta != 0);
}
//visualizza il menu
void visualizzamenu(int v1[])
{
    printf("\n+-----------------------------+\nSeleziona un programma:\n");
    printf("1. stampa vettore \n");
    printf("2. carica vettore con valori scelti dall'utente \n");
    printf("3. carica random \n");
    printf("4. ricerca elemento \n");
    printf("5. conta quante volte e' presente un elemento \n");
    printf("6. trova valore massimo \n");
    printf("7. trova indice massimo \n");
    printf("8. trova valore minimo \n");
    printf("9. trova indice minimo \n");
    printf("10. pulisci schermo \n");
    printf("0. Esci\n+-----------------------------+\n");
}       
//assegna a tutti gli indici il valore 0
void azzera(int v1[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v1[i]=0;
	}
}
//chiede all'utente gli interi da inserire nel vettore
void caricaUtente(int v1[])
{
	int num, i;
	for(i=0;i<N;i++)
	{	
		printf("inserisci intero per posizione %d: ", i);
		scanf("%d",&v1[i]);
	}
	printf("VETTORE CARICATO");
}
//carica il vettore con numeri random fino a 99
void caricaRandom(int v1[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v1[i]= rand() % 100;
	}
	printf("VETTORE CARICATO CASUALMENTE");
}
//stampa il vettore
void stampaArray (int v1[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf ("posizione %d: %d \n",i,v1[i]);	
	}
}
//Ricerca di un valore passato come parametro (restituisce l'indice)
int ricercaElemento(int v1[], int x)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(v1[i]==x)
			return i;
	}
	return -1;
}
//Conta quante volte è presente un elemento passato come parametro
int contaElemento(int v1[], int x)
{
	int i, cont=0;
	for(i=0;i<N;i++)
	{
		if(v1[i]==x)
			cont++;
	}
	return cont;
}
//Trova il valore più grande (massimo) restituendo il valore
int trovaValoreMax(int v1[])
{
	int i, max=v1[0];
	for(i=0;i<N;i++)
	{
		if (v1[i]>max)
			max=v1[i];
	}
	return max;
}
//Trova l'indice più grande (massimo) restituendo l'indice
int trovaindiceMax(int v1[])
{
	int i, max=v1[0], indice=0;
	for(i=0;i<N;i++)
	{
		if (v1[i]>max)
		{
			max=v1[i];
			indice=i;
		}
	}
	return indice;
}
//Trova il valore più piccolo (minimo) restituendo il valore
int trovaValoreMin(int v1[])
{
	int i, min=v1[0];
	for(i=0;i<N;i++)
	{
		if (v1[i]<min)
			min=v1[i];
	}
	return min;
}
//Trova l'indice più piccolo (minimo) restituendo l'indice
int trovaindiceMin(int v1[])
{
	int i, min=v1[0], indice=0;
	for(i=0;i<N;i++)
	{
		if (v1[i]<min)
		{
			min=v1[i];
			indice=i;
		}
	}
	return indice;
}



















