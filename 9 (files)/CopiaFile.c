#include <stdio.h>

int main() {
    FILE *file1 = fopen("testi/Nomi.txt", "r");
    FILE *file2 = fopen("testi/Nomi2.txt", "w");

    // Verifica che l'apertura dei file sia corretta
    if (file1 == NULL || file2 == NULL) {
        perror("Errore durante l'apertura del file");
        return 1;
    }

    int carattere;
    // Legge carattere per carattere fino a EOF
    while ((carattere = fgetc(file1)) != EOF) {
          // Converte la riga in maiuscolo
        for (int i = 0; riga[i] != '\0'; i++) {
            riga[i] -= 32;
        }
        fputc(carattere, file2);
    }

    // Chiusura dei file
    fclose(file1);
    fclose(file2);
    return 0;
}
