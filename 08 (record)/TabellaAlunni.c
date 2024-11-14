#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h>
#define MAX_ALUNNI 5

struct data {
    int giorno;
    int mese;
    int anno;
} typedef data;

struct alunno {
    data n;
    char cognome[20];
    int voti[3];
} typedef alunno;

void carica(alunno tab[]); 
void stampa(alunno tab[]); 
float media(alunno tab[], int, int*); 
int studenti10(alunno tab[]);
int ricerca(alunno tab[], char cog[]);
void formattaCogn(alunno tab[]);

int main() {
    system("color 3");
    srand(time(NULL));
    alunno tab[MAX_ALUNNI];
    char cog[20];
    
    carica(tab);
    formattaCogn(tab);
    stampa(tab);
    int ris=studenti10(tab);
    printf("Gli studenti con almeno un voto pari a 10 sono %d\n", ris);
    ris=ricerca(tab,cog);
    printf("Lo studente e' stato trovato all'indice %d\n", ris);
 
    return 0;
}
// Carica la tabella chiedendo dati all'utente o generandoli casualmente
void carica(alunno tab[]) {
    int i, j;
    for(i = 0; i < MAX_ALUNNI; i++) {
        // Avvaloro il campo cognome
        printf("ALUNNO %d: ", i + 1);
        scanf("%s", tab[i].cognome);
        // Avvaloro giorno di nascita random
        tab[i].n.giorno = rand() % 30 + 1;
        // Avvaloro mese di nascita random
        tab[i].n.mese = rand() % 12 + 1;
        // Avvaloro anno di nascita random
        tab[i].n.anno = rand() % 2 + 2007;
        // Avvaloro il campo voti
        for(j = 0; j < 3; j++) {
            tab[i].voti[j] = rand() % 7 + 4;
        }
    }
    printf("\n");
}
// Scrivi in maiuscolo la prima lettera del campo cognome e minuscole tutte le altre per tutti i record della tabella
void formattaCogn(alunno tab[])
{
	int i,j;
	for(i=0; i<MAX_ALUNNI; i++)
	{
		j=1;
		if (tab[i].cognome[0] >='a' && tab[i].cognome[0]<='z') tab[i].cognome[0]-=32;
		while (tab[i].cognome[j]!='\0') {
			if(tab[i].cognome[j] >= 'A'&& tab[i].cognome[j]<='Z') tab[i].cognome[j]+=32;
			j++;
		}
	}	
}
// Stampa la media voti per ogni studente e conta quante medie sono >= 6.
float media(alunno tab[], int i, int *cont) { //per il contatore utilizzo il passaggio per indirizzo per poterlo stampare dopo la tabella
    int j;
    float somma = 0;
    for(j = 0; j < 3; j++) {
        somma += tab[i].voti[j]; 
    }
    float media = somma / 3;
    if(media >= 6) {
        printf("\tsufficiente:   ");
        (*cont)++;
    } else {
        printf("\tinsufficiente: ");
    }
    return media;
}
// Stampa la tabella allineando correttamente i dati.
void stampa(alunno tab[]) {
    int i, j, cont = 0;
    printf("%-20s %-13s %-11s %-20s", "COGNOME", "NASCITA", "VOTI", "VALUTAZIONE");
    printf("\n-------------------- ------------- ----------- --------------------\n");
    for(i = 0; i < MAX_ALUNNI; i++) {
        // Stampo il record
        printf("%-20s ", tab[i].cognome);
        printf("%02d/%02d/%4d   ", tab[i].n.giorno, tab[i].n.mese, tab[i].n.anno);
        for(j = 0; j < 3; j++) {
            printf("%3d", tab[i].voti[j]);
        }
        // Calcolo e stampo la media
        float r = media(tab, i, &cont);
        printf("%.2f\n", r);
    }
    printf("-------------------- ------------- ----------- --------------------\n");
    printf("Gli alunni con la sufficienza sono %d\n", cont);
}
// Conta gli studenti con almeno un voto pari a 10.
int studenti10(alunno tab[]) {
	int i, j, conta=0,vero;
	for(i = 0; i < MAX_ALUNNI; i++) {
		vero=0;
		for(j = 0; j < 3; j++) {
            if (tab[i].voti[j]==10)
            	vero=1;
        }
        if (vero==1)
        	conta++;
	}
	return conta;
}
// Cerca uno studente per cognome, restituendo l'indice (o -1 se non trovato).
int ricerca(alunno tab[], char cog[])
{
	int i;
	printf("inserisci cognome per ricerca: ");
	scanf("%s", cog);
	for(i=0;i<MAX_ALUNNI; i++)
	{
		if (strcmp(tab[i].cognome, cog) == 0)
			return i;
	}
	return -1;
}
