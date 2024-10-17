#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;
	float delta, rad, r1, r2;
	
	printf ("inserisci i  valori di a, b, c \n");
	scanf ("%d %d %d", &a, &b, &c);
	
	delta= pow (b,2)- (-4*a*c);
	
	if (delta>0) {
		rad=sqrt(delta);
		r1 = (-b +rad) /2*a;
		r2 = (-b -rad) /2*a;
		printf ("x1 = %f x2 = %f", r1, r2);
	}
	else if (delta==0) {
		r1 = -b/2*a;
		printf ("x1 e x2 sono uguali: %f", r1);
	}
	else {
		printf("il delta risulta negativo, quindi l'equaziome e' impossibile");
	}
	
	return 0;
}
