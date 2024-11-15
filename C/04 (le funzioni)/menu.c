/*
Panetta Kevin
classe: 3H
Scrivere la funzione “void menu()” che visualizzi un menù e che chieda all’utente un numero corrispondente all’operazione eseguire, 0 per uscire. 
Aggiungere alla funzione menu le chiamate alle tre precedenti funzioni per testarle. 
Chiedere all'utente di inserire i valori necessari per ogni funzione e stampare il risultato ottenuto.
*/

#include <stdio.h>

void somma_divisori ()
{
	int num, div=1, somma=0;;
	
	printf("\ninserisci un numero intero: ");
	scanf ("%d", &num);
		
	while (div <= num/2)
	{	
		if (num%div == 0)
		{
			somma+=div;
		}
		div++;
	}
	printf("somma divisori = %d\n", somma);
}

void mcd()
{
	int a, b, ris, resto;
	
	printf("\ninserisci primo numero: ");
	scanf ("%d", &a);
	printf("inserisci secondo numero: ");
	scanf ("%d", &b);

	while (b!=0)
	{
		resto = a % b; 
		a = b;
		b=resto;
	}
	printf("mcd = %d \n", a);
}
void area_rettangolo ()
{
	int base, altezza, area;
	
	printf("\ninserisci base: ");
	scanf ("%d", &base);
	printf("inserisci altezza: ");
	scanf ("%d", &altezza);
	
	area = base*altezza;
	printf("area = %d\n", area);
}

void menu()
{
    int scelta;

    do {
        printf("\n+-----------------------------+\nSeleziona un programma:\n");
        printf("1. somma divisori\n");
        printf("2. mcd\n");
        printf("3. area rettangolo\n");
        printf("0. Esci\n+-----------------------------+\n");

        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                somma_divisori();
                break;
            case 2:
                mcd();
                break;
            case 3:
                area_rettangolo();
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
    } while (scelta != 0);
}

int main()
{
    menu();
    return 0;
}
