/*	
Panetta Kevin
classe: 3H
Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
*/

#include <stdio.h> 

int main() 
{
	char scelta;

	do
	{
	printf("digita a per visualizzare i numeri\n");
	printf("digita b per visualizzare l'alfabeto\n");
	printf("digita u per uscire\n\n");
	scanf("%c", &scelta);
	

		switch (scelta)	
		{		
			case 'a':
				printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 0\n\n");
				break;
			case 'b':
				printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n\n");
				break;
			default: printf ("la scelta non corrisponde\n\n");
			break;
		}
			
	} while (scelta!='u');
	printf ("programma terminato\n\n");
	return 0;
}


