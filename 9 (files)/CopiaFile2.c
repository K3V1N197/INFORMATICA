#include <stdio.h>
#include <string.h>
int main ()
{
    FILE* file1 = fopen("in.txt", "r");
    FILE* file2 = fopen("out.txt", "w");

    if (file1 == NULL || file2 == NULL) { //verifica che l'apertura del file sia corretta
        perror("Errore durante apertura file");
        return 1;
    }

    char riga[100]; // Array per memorizzare la riga di testo
    while (fgets(riga, sizeof(riga), file1) != NULL) {
        fputs(riga, file2); // copia il primo file nel secondo file
    }

    fclose(file1);
    fclose(file2);
    return 0;
}