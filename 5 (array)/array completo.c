#include <stdio.h>
#define N 10
void visualizzamenu ();
void azzera (int [],int []);
void caricaArray (int []);
void stampaArray (int []);
int ricercaElemento(int [], int);
void InvertiAltroVettore(int v1[], int v2[]);
void copiaDoppioAltroVettore(int v1[], int v2[]);
void copiaPari(int v1[], int v2[]);
int trovaMax(int v1[]);
int trovaIndiceDelMax(int v1[]);
int main()
{
	int v1[N], v2[N],scelta, r, x, max, indice;

	azzera (v1, v2);

    do {
    	visualizzamenu ();

        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
               	caricaArray (v1);
                break;
			case 2:
               	stampaArray (v1);
                break;
            case 4:
            	printf ("inserisci valore per ricerca indice: ");
            	scanf("%d", &x);
            	r=ricercaElemento(v1, x);
            	printf ("corrispondenza indice: %d", r);
                break;
            case 5:
        		InvertiAltroVettore(v1, v2);
                break;   
			case 6:
        		copiaDoppioAltroVettore(v1, v2);
                break;  
			case 7:
        		copiaPari(v1, v2);
                break;   
			case 8:
                max=trovaMax(v1);	
                printf ("valore massimo: %d", max);
				break;    
			case 9:
                indice=trovaIndiceDelMax(v1);	
                printf ("indice del valore massimo: %d", indice);
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
    printf("1. carica vettore\n");
    printf("2. stampa vettore 1\n");
    printf("3. stampa vettore 2\n");
    printf("4. ricerca elemento\n");
    printf("5. inverti altro vettore\n");
    printf("6. raddoppia vettore 2\n");
    printf("7. copia solo elementi pari in v2\n");
    printf("8. trova massimo\n");
    printf("8. trova indice massimo\n");
    printf("0. Esci\n+-----------------------------+\n");
}       
//assegna a tutti gli indici il valore 0
void azzera(int v1[],int v2[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v1[i]=0;
		v2[i]=0;
	}
}
//chiede all'utente gli interi da inserire nel vettore
void caricaArray(int v1[])
{
	int num, i;
	for(i=0;i<N;i++)
	{	
		printf("inserisci intero per posizione %d: ", i);
		scanf("%d",&v1[i]);
	}
	printf("VETTORE CARICATO");
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
//ricerca un elemento all'interno del vettore
int ricercaElemento(int v1[], int x)
{
	int i;
	for(i=0;i<=N;i++)
	{
		if(v1[i]==x)
			return i;
	}
	return -1;
}
//inverte il vettore
void InvertiAltroVettore(int v1[], int v2[])
{
	int i, j;
	for(i=0, j = N-1; i<=N; i++, j--)
	{
		v1[i]=v2[j];
	}
	printf("VETTORE 2 INVERTITO");
}
//in v2 vengono raddoppiati i valori di v1
void copiaDoppioAltroVettore(int v1[], int v2[])
{
	int i;
	for(i=0; i<=N; i++)
	{
		v1[i]=2*v2[i];
	}
	printf("VETTORE 2 RADDOPPIATO");
}
//copia nel 2° vettore gli elementi pari presenti nel 1° vettore
void copiaPari(int v1[], int v2[])
{
	int i;
	for(i=0; i<=N; i++)
	{
		if (v1[i]%2==0)
			v1[i]=v2[i];
	}
	printf("COPIA PARI COMPLETATO");
}
//restituisce il valore più grande presente nel vettore
int trovaMax(int v1[])
{
	int i,max=v1[0];
	for(i=1;i<=N;i++)
	{
		if(v1[i]>max)
			max=v1[i];
	}
	return max;
}
//restituisce l'indice dell'elemento più grande presente nel vettore
int trovaIndiceDelMax(int v1[])
{
		int i,max=v1[0],indice;
	for(i=1;i<=N;i++)
	{
		if(v1[i]>max){
			max=v1[i];
			indice=i;
		}
	}
	return indice;
}


















