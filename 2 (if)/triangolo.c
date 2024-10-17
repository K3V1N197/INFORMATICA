/*
Panetta Kevin
classe: 3H
Scrivere un programma che, lette le misure dei lati di un triangolo, visualizzi se il triangolo è equilatero, isoscele o scaleno.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf ("inserisci il primo lato\n");
    scanf ("%d", &a);
    printf ("inserisci il secondo lato\n");
    scanf ("%d", &b);
    printf ("inserisci il terzo lato\n");
    scanf ("%d", &c);

    if (a==b && a==c)
    {
    	printf ("il triangolo e' equilatero");
	}
	else if (a==b || a==c || b==c)
	{
    	printf ("il triangolo e' isoscele");
	}
	else 
	{
    	printf ("il triangolo e' scaleno");
	}
return 0;
}
