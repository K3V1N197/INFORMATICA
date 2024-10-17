/*
Panetta Kevin
classe: 3H
Scrivere un programma che, richiesti in ingresso tre valori interi distinti, ne determini il minore e il maggiore.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf ("inserisci il primo numero\n");
    scanf ("%d", &a);
    printf ("inserisci il secondo numero\n");
    scanf ("%d", &b);
    printf ("inserisci il terzo numero\n");
    scanf ("%d", &c);

    if (a>b && a>c)
    {
        printf ("il numero maggiore e' %d \n", a);
    }
    else if (b>c && b>a)
    {
        printf ("il numero maggiore e' %d \n", b);
    }
    else 
    {
        printf ("il numero maggiore e' %d \n", c);
    }
    
    if (a<b && a<c)
    {
        printf ("il numero minore e' %d", a);
    }
    else if (b<c && b<a)
    {
        printf ("il numero minore e' %d", b);
    }
    else 
    {
        printf ("il numero minore e' %d", c);
    }
return 0;
}
