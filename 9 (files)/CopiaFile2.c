#include <stdio.h>
#include <string.h>
int main ()
{
    FILE* file1 = fopen("testi/in.txt", "r");
    FILE* file2 = fopen("testi/out.txt", "w");

    if (file1 == NULL || file2 == NULL) { //verifica che l'apertura del file sia corretta
        perror("Errore durante apertura file");
        return 1;
    }

    // Copia carattere per carattere
    while ((carattere = fgetc(file1)) != EOF) {
        fputs(riga, file2); // copia il primo file nel secondo file
    }

    fclose(file1);
    fclose(file2);
    return 0;
}