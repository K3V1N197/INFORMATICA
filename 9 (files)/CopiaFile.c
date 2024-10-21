#include <stdio.h>

int main() {
    FILE* file_ptr = fopen("testo.txt", "r");
    if (file_ptr == NULL) {
        perror("Errore durante l'apertura del file");
        return 1;
    }

    int carattere;

    while ((carattere = fgetc(file_ptr)) != EOF) {
        printf("%c", (char)carattere); // Stampa il carattere letto
    }

    fclose(file_ptr);

    return 0;
}
