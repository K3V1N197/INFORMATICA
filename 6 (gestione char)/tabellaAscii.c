#include <stdio.h>

int main() {
	int i;
    printf("Decimale Ottale Esadecimale Carattere\n");
    for (i = 0; i <= 127; ++i) {
        printf("%d\t%o\t%x\t\t%c\n", i, i, i, i);
    }
    return 0;
}
