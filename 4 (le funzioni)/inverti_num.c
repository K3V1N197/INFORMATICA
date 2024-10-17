/*
Panetta Kevin
classe: 3H
Scrivi una funzione che inverte le cifre del numero intero passato come argomento. 
Ad esempio, dato l'intero 567, la funzione restituisce 765. 
Prova il programma con numeri interi con diversi numeri di cifre.
*/

#include <stdio.h>

int main() 
{
    int num;
    
    printf("inserisci un numero intero: ");
    scanf("%d", &num);


    printf("numero invertito: %d", invertire(num));

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
