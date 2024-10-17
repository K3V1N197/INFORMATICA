/*
Panetta Kevin
classe: 3H
letta una lettera da tastiera, visualizzare il giorno o giorni della settimana che iniziano con la stessa lettera; in caso negativo visualizzare “nessun giorno”. Usare il costrutto switch-case
*/

#include <stdio.h>

int main()
{
	char car;
	printf ("venerdi");		

	printf ("inserisci lettera ");
	scanf ("%c", &car);

	switch (car)
{
    case 'l':
        printf ("lunedi");
        break;
    case 'm' :
       printf ("martedi, mercoledi");
        break;
    case 'g' :
        printf ("giovedi");;
        break;
    case 'v':
        printf ("venerdi");
        break;
    case 's':
        printf ("sabato");
        break;
    case 'd':
        printf ("domenica");
        break;
    default:
    	printf ("nessun giorno");
}
    
    return 0;
}
