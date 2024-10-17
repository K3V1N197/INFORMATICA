/*
Panetta Kevin
classe: 3H
Scrivere la funzione “void menu()” che visualizzi un menù e che chieda all’utente un numero corrispondente all’operazione eseguire, 0 per uscire. 
Aggiungere alla funzione menu le chiamate alle precedenti funzioni per testarle. 
Chiedere all'utente di inserire i valori necessari per ogni funzione e stampare il risultato ottenuto.
*/

#include <stdio.h>
#include <windows.h>

void programma1 ()
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

}	//FINE PRIMO PROGRAMMA

void programma2()
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
}	//FINE SECONDO PROGRAMMA

void programma3 ()
{
	int base, altezza, area;
	
	printf("\ninserisci base: ");
	scanf ("%d", &base);
	printf("inserisci altezza: ");
	scanf ("%d", &altezza);
	
	area = base*altezza;
	printf("area = %d\n", area);
}	//FINE TERZO PROGRAMMA

void programma4() 
{
    int num;
    
    printf("\nInserisci un numero: ");
    scanf("%d", &num);

    printf("numero = %d (0=pari - 1=dispari)\n", pari_dispari(num));
}
int pari_dispari(int x) 
{
    while (x >= 2)
	{
        x -= 2;
    }

    if (x == 0)
        return 0; // pari
    else {
        return 1; // dispari
    }
}	//FINE QUARTO PROGRAMMA

void programma5() 
{
	int num;
	
	printf("\ninserisci un numero intero: ");
	scanf ("%d", &num);

	stampa_divisori (num);
		
}
void stampa_divisori (int x)
{
	int i=1, somma=0;
	
	printf ("divisori di %d: ",x);
	for (i; i <= x/2; i++)
	{	
		if (x%i == 0)
		{
			printf ("%d ",i);
			somma+=i;
		}
	}
	printf("\nsomma divisori = %d \n",somma);
}	//FINE QUINTO PROGRAMMA

void programma6() 
{
	int num1, num2;
    for (num1=1; num1 <= 1500; num1++) 
	{
        num2 = somma_divisori(num1);											
        if (num1 != num2 && num2 <= 1500 && somma_divisori(num2) == num1) 	// se num2 è diverso da num1, è minore di 1500 e la somma dei suoi divisori è uguale a quella di num1
		{																			
            printf("%d e %d sono numeri amici\n", num1, num2);				// stampo i 2 numeri amici
        }																		 
    }
}
int somma_divisori(int x) 
{
    int i=1, somma=0;
    
    for (i; i <= x/2; i++)													//trovo i divisori di num2 e li sommo
	{
        if (x%i == 0) {
            somma += i;
        }
    }
    return somma;
}	//FINE SESTO PROGRAMMA

void menu()
{
    int scelta;

    do {
    	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); 									// impostare il colore
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_GREEN | FOREGROUND_INTENSITY); 			// verde brillante
        printf("\n+-----------------------------+\nSeleziona un programma:\n");
        printf("1. somma divisori\n");
        printf("2. mcd\n");
        printf("3. area rettangolo\n");
        printf("4. pari o dispari\n");
        printf("5. stampa divisori\n");
        printf("6. numeri amici (<1500)\n");
        printf("7. pulisci lo schermo\n");
        printf("0. Esci\n+-----------------------------+\n");
        SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // ripristinare il colore originale del testo

        scanf("%d", &scelta);
        switch (scelta) {
            case 1:
                programma1();
                break;
            case 2:
                programma2();
                break;
            case 3:
                programma3();
                break;
            case 4:
                programma4();
                break;
            case 5:
                programma5();
                break;
            case 6:
                programma6();
                break;
            case 7:
                printf("\e[2J\e[H");	//funzione per pulire lo schermo
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
