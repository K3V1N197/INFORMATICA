#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void visualizzamenu ();
void carica (int[][C]);
void stampa(int m[][C]);  
void caricaRandom (int[][C]);
int conta(int m[][C], int x); 
void stampaDiagonale (int m[][C]);
void stampaDiagonalesecondaria(int m[][C]); 
void stampaDiagonale2(int m[R][C]);

int main ()
{
	int m[R][C], scelta, ris, x;
	srand((time)NULL);
	
	do {
    	visualizzamenu ();

        scanf("%d", &scelta);

        switch (scelta) 
		{
            case 1:
               	carica (m);
                break;
			case 2:
               	stampa (m);
                break;
            case 3:
               	caricaRandom (m);
                break;
            case 4:
            	printf("quale numero vuoi contare? ");
            	scanf("%d", &x);
               	ris = conta (m, x); 
               	printf("il numero %d e' presente %d volte",x, ris);
                break;
            case 5:
               	stampaDiagonale (m);
                break;
            case 6:
               	stampaDiagonalesecondaria (m);
                break;
            case 7:
        	   	stampaDiagonale2 (m);
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

void visualizzamenu()
{
    printf("\n+--------------------------------------+\n\tSeleziona un programma:\n");
    printf("1. carica con numeri scelti dall'utente\n");
    printf("2. stampa matrice\n");
    printf("3. carica con numeri random (da 10 a 40)\n");
    printf("4. conta\n");
    printf("5. stampa diagonale principale\n");
    printf("6. stampa diagonale secondaria\n");
    printf("7. stampa diagonale graficamente\n");
    printf("0. Esci\n+--------------------------------------+\n");
}     
//avvalora la matrice chiedendo i valori all'utente
void carica (int m[][C])
{
	int i, j;
	for (i=0; i<R; i++)
	{
		printf("inserisci 5 numeri da inserire nella riga %d: \n",i+1);
		for (j=0; j<C; j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
}
//stampa sul monitor la matrice curando aspetto grafico
void stampa (int m[][C])
{
	int i, j;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			printf("%3d", m[i][j]);
		}
		printf("\n");
	}
}
//avvalora la matrice con funzione rand con valori compresi fra 10 e 40;
void caricaRandom (int m[][C])
{
	int i, j;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			m[i][j]=rand()%31+10;
		}
	}
	printf("MATRICE RANDOM CARICATA");
}
//la funzione restituisce un intero che riporta quante volte l'intero x è presente nella matrice.
int conta (int m[][C], int x)
{
	int i, j, cont;
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			if (x==m[i][j])
				cont++;
		}
	}
	return cont;
}
//la funzione stampa sul monitor i valori della diagonale principale
void stampaDiagonale(int m[R][C]) 
{
	int i;
    printf("Valori della diagonale principale:\n");
    for (i = 0; i < R; i++) 
	{
        printf("%d ", m[i][i]);
    }
}
// la funzione stampa sul monitor i valori della diagonale secondaria.
void stampaDiagonalesecondaria(int m[][C])
{
	int i, j;
    printf("Valori della diagonale secondaria:\n");
    for (i=0, j=C-1; i < R; i++, j--) 
	{
        printf("%d ", m[i][j]);
    }
}
// la funzione stampa sul monitor la diagonale graficamente
void stampaDiagonale2(int m[R][C]) 
{
	int i, cont;
	for (i = 0; i < R; i++) 
	{
		for (cont = i; cont >= 0; cont--)
		{
			printf("  ");
		}
        printf("%d\n", m[i][i]);
    }
}
