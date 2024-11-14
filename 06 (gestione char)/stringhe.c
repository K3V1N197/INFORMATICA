#include <string.h>
#include <stdio.h>
#define N 100

int main ()
{
	char s1[N], s2[N], copia, confronto;
	int l;
	
	//legge la stringa
	printf("scrivi una parola: ");
	scanf("%s", s1);
	//stampa la stringa
	printf("\nparola scritta: %s \n", s1);
	//conta quanti caratteri ha la stringa
	printf("lunghezza parola scritta: ");
	l=strlen(s1);
	printf ("%d\n", l);
	//copia s1 in s2 e lo stampa
	strcpy(s2, s1);
	printf("stringa 1 copiata in stringa 2: %s\n", s2);
	//avvalorare s2
	printf("avvalora s2: ");
	scanf("%s", s2);
	//confronta s1 e s2
	confronto = strcmp (s1, s2);
	if (confronto==0)
		printf("le parole sono uguali");
	else if  (confronto < 0)
		printf("s1 viene prima di s2");
	else {
		printf("s2 viene prima di s1");
	}
	
}
