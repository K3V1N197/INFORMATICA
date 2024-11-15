#include <stdio.h>
#define N 50

//avvaloro record persona
struct persona {
	char cognome[N];
	char indirizzo[N];
	char provincia[N];
}typedef persona;
//avvaloro record data di nascita
struct nascita {
	int giorno;
	int mese;
	int anno;
}typedef nascita;

int main ()
{
	system("color 3"); //colore testo blu
	persona r;
	nascita n;
	//avvaloro il campo cognome
	printf("COGNOME: ");
	scanf("%s", &r.cognome);
	//avvaloro il campo indirizzo 
	printf("INDIRIZZO: ");
	scanf("%s", &r.indirizzo);
	//avvaloro il campo indirizzo 
	printf("PROVINCIA: ");
	scanf("%s", &r.provincia);
	//avvaloro il campo giorno di nascita
	printf("GIORNO DI NASCITA: ");
	scanf("%d", &n.giorno);
	//avvaloro il campo mese di nascita
	printf("MESE DI NASCITA: ");
	scanf("%d", &n.mese);
	//avvaloro il campo anno di nascita
	printf("ANNO DI NASCITA: ");
	scanf("%d", &n.anno);
	
	printf("\n\n");
	//stampo i record
	printf("%s   ", r.cognome);
	printf("%s   ", r.indirizzo);
	printf("%s \n", r.provincia);
	printf("%d/", n.giorno);
	printf("%d/", n.mese);
	printf("%d", n.anno);
}	