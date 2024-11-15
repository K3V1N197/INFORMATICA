/*
Panetta Kevin
classe: 3H
Scrivi una funzione che determina se un numero è primo e una che stampa tutti i numeri primi compresi tra 0 e il numero dato.
*/
#include <stdio.h> 
int numero_primo (int);
void stampa_primi (int);

int main() 
{
	int num, div, primo;
	
	printf("inserisci un numero intero: ");
	scanf("%d", &num);
	
	if (numero_primo(num)==0) 
		printf("il numero %d e' primo\n",num);
	else{
		printf("il numero %d non e' primo\n",num);
	}	
	stampa_primi(num);
}
// verifica se il numero è primo
int numero_primo(int x)
{	
	int primo=0;
	
	for (int i=2;i<=x/2;i++) {
		if (x%i==0)
			primo++;
	}
	return primo;
}
// stampa i numeri primi fino a num
void stampa_primi(int x)
{
	int cont=3, primo;
	printf("\ni numeri primi fino a %d sono:\n",x);
	while (cont<=x)
	{
		if (numero_primo(cont)==0) {
			printf("%d ",cont);
		}
		cont++;
	}
}




