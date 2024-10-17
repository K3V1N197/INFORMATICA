/*
	Il gioco genera dei numeri casuali fino a 50. 
	Se esce lo stesso numero 2 volte si fa ambo. 
	Se esce 3 volte si fa terno (il programma termina)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

void azzera (int []);
int controlla (int [],int [],int);
void stampa (int []);
void estrazione (int [],int);

int main ()
{
	system("color 5E"); //colore testo e sfondo
	srand(time(NULL));
	int v1[N], v2[N], cont=0, r;
	
	azzera (v1);
	azzera (v2);
	do
	{
		estrazione (v1,cont);
		r=controlla (v1, v2, cont);
		cont++;
	} while(r!=0);
	printf ("\n\n GIOCO CONCLUSO");
}
//azzera il vettore
void azzera (int v[])
{
	int i;
	for(i=0;i<N;i++)
	{	
		v[i]=0;
	}
}
//stampa il vettore con la posizione
void stampa (int v[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf ("%3d",i+1);	
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf ("%3d",v[i]);	
	}

	printf("\n");
}
//estrae un numero random
void estrazione (int v[], int i)
{
	v[i]=rand()%N+1;
	printf("\n numero estratto %d\n", v[i]);
}
//controlla se è stato fatto un ambo o un terno
int controlla (int v[], int v2[], int x)
{
	int i,win=0;
	char scelta;
	for(i=0;i<N;i++)
	{
		if (v[x]==v[i])
		{
			v2[x] = win++;
			if(win==2){
				stampa (v);
				printf("\n E' STATO FATTO AMBO CON IL NUMERO %d\n", v[x]);
				printf("\n continuare? (y=si - n=no) \n");
				scanf("%c", &scelta);
				if(scelta=='n')
					return 0;
				system("cls");
			}
			if(win==3){
				stampa (v);
				printf("\n E' STATO FATTO TERNO CON IL NUMERO %d\n", v[x]);
			}
		}
	}
	
	if (win==3)
		return 0;
	//system("cls");
	return 1;	
}
