//PANETTA KEVIN 3H

#include <stdio.h>

int main ()

{
	char car;
	
	printf("inserisci una lettera ");
	scanf("%c", &car);
	
	if(car >= 'a' &&  car <= 'z')
	{
		car = car - 32;
		printf ("lettera maiuscola = %c", car);
	}
		else if (car >= 'A' && car <= 'Z')
		
	{
		car = car + 32;
		printf ("lettera minuscola = %c", car);
	}
		else 
	{
		printf ("non e' una lettera");
	}

	return 0;
}
