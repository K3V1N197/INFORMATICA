/*
Panetta Kevin
classe: 3H
Un numero intero è palindromo se può essere letto avanti e indietro. Ad esempio 7, 323, 82328, 6547456 sono tutti palindromi. 
Scrivi una funzione per determinare se un numero è palindromo. 
Utilizzare la funzione sviluppata precedentemente per invertire il numero intero fornito prima di verificare se è palindromo.
*/
#include <stdio.h>
int invertire(int);
void palindromo (int,int);

int main() 
{
    int num;
    
    printf("inserisci un numero intero: ");
    scanf("%d", &num);

    printf("\nnumero invertito: %d", invertire(num));
    palindromo(num,invertire(num));
    
    return 0;
}
// Funzione per invertire le cifre di un intero
int invertire(int x) 
{
    int invertito=0, estrai;
    while (x != 0) 
	{
        // Estrae l'ultima cifra del numero
        estrai = x % 10;
        // Costruisce il numero invertito moltiplicando l'invertito corrente per 10 e aggiungendo la cifra invertita
        invertito = invertito * 10 + estrai;
        // Rimuove l'ultima cifra dal numero originale
        x /= 10;
    }
    return invertito;
}
// Funzione per verificare se il numero è palindromo
void palindromo (int x, int y)
{
	if (x==y)
		printf("\nil numero %d e' palindromo", x);
	else {
		printf("\nil numero %d non e' palindromo", x);
	}
}












