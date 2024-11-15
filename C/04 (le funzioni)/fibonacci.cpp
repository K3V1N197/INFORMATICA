/*
Panetta Kevin
classe: 3H
Scrivere una funzione che prende in input un numero intero e restituisce la sua sequenza di Fibonacci corrispondente stampandola a schermo.
*/

#include <stdio.h> 

void fibonacci(int);
int main() 
{
	int num;

	printf("inserisci un numero: ");
	scanf("%d", &num);
	
	printf("sequenza di Fibonacci dei primi %d numeri: ", num);
	fibonacci(num);
	
	return 0;
}
// calcolo sequenza di fibonacci
void fibonacci(int x)
{
	int a = 0, b = 1, c = 0;
	
    // Primi due numeri della sequenza
    printf("%d, ", a);
    printf("%d, ", b);
    
    // Generazione dei numeri successivi
    for (int i = 2; i < x; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b; 
        b = c; 
    }
}