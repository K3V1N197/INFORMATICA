#include <stdio.h>

int main() {
    FILE *file1 = fopen("testi/Nomi.txt", "r");
    FILE *file2 = fopen("testi/Nomi2.txt", "w");

    // Verifica che l'apertura dei file sia corretta
    if (file1 == NULL || file2 == NULL) {
        perror("Errore durante l'apertura del file");
        return 1;
    }

    char riga[100]; // Array per memorizzare la riga
    while (fgets(riga, sizeof(riga), file1) != NULL) {
        // Converte la riga in maiuscolo
        for (int i = 0; i<100; i++) {
            if (riga[i] >= 'a' && riga[i] <= 'z') riga[i] -= 32;
        }
        fputs(riga, file2); // Scrive la riga nel file di output
    }

    // Chiusura dei file
    fclose(file1);
    fclose(file2);
    return 0;
}
