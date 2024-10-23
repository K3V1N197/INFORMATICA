#include <stdio.h>

int main() {
    FILE* file1 = fopen("testi/in.txt", "r");
    FILE* file2 = fopen("testi/out.txt", "w");

    // Verifica che l'apertura del file sia corretta
    if (file1 == NULL || file2 == NULL) {
        perror("Errore durante apertura file");
        return 1;
    }

    int carattere; // Dichiara la variabile per memorizzare il carattere letto

    while ((carattere = fgetc(file1)) != EOF) {
        fputc(carattere, file2); // Copia il carattere dal primo file al secondo file
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
