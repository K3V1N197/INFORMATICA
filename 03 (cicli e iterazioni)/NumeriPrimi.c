/*
Panetta Kevin
classe: 3H
Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
*/

#include <stdio.h> 

int main() 
{
	int num=1, div, primo;
	
	printf("i numeri primi fino a 100 sono:\n");
	
	while (num<100){
		primo=1;
		num+=1;
		div=2;
		
		while (div<=num/2) {
			if (num%div==0) {
				primo=0;
			}
			div+=1;	
		}
		if (primo==1) {
			printf("%d\n",num);
		}
	}
	
	return 0;
}


