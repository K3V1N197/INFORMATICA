#include <stdio.h>
#define LIMITE 50

int main ()
{
	int cont=0, somma=0, num, max=0;
	float media;
	
	do {
		printf ("inserisci un numero\t");
		scanf ("%d", &num);
		cont++;
		somma+=num;
		
		if (num>max){
			max=num;
		}
	} while(somma<LIMITE);
	
	media=(float)somma/cont;
	printf ("sono stati inseriti %d numeri \nla media e' %.2f \nil numero piu' grande e' %d", cont, media, max);
	
	return 0;	
}

