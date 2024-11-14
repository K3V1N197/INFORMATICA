#include <stdio.h>
#define N 20
#define V 3

//avvaloro il record
struct s_alunno
{
	int matricola;
	char cognome[N];
	int voti[V];
} typedef s_alunno;

int main ()
{
	s_alunno r, r1;
	int i;
	//avvaloro il campo matricola
	printf("MATRICOLA: ");
	scanf("%d", &r.matricola);
	//avvaloro il campo cognome 
	printf("COGNOME: ");
	scanf("%s", &r.cognome);
	//avvaloro il campo voti 
	for(i=0; i<V; i++)
	{
		printf("VOTO %d: ",i+1);
		scanf("%d", &r.voti[i]);
	}
	printf("\n\n");
	
	//stampo il record
	printf("%d   ", r.matricola);
	printf("%s   ", r.cognome);
	for(i=0; i<V; i++)
	{
		printf("%d ", r.voti[i]);
	}
	
	//copio il primo record nel secoondo record
	r=r1;
}	
