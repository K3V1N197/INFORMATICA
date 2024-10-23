#include <stdio.h>
#include <ctype.h>

int main() {
    FILE* file = fopen("Nomi.txt", "r");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return 1;
    }

    int carattere;
    int numCaratteri = 0;
    int numParole = 0;
    int numRighe = 0;
    int inParola = 0; // Flag per verificare se siamo in una parola

    while ((carattere = fgetc(file)) != EOF) {
        // Conta i caratteri, escludendo spazi e tabulazioni
        if (!isspace(carattere)) {
            numCaratteri++;
            if (!inParola) {
                inParola = 1; // Inizia una nuova parola
                numParole++;
            }
        } else {
            inParola = 0; // Siamo fuori da una parola
        }

        // Conta le righe
        if (carattere == '\n') {
            numRighe++;
        }
    }

    // Se il file non è vuoto, conta l'ultima riga
    if (numCaratteri > 0) {
        numRighe++;
    }

    // Stampa i risultati
    printf("Caratteri (senza spazi e tabulazioni): %d\n", numCaratteri);
    printf("Parole: %d\n", numParole);
    printf("Righe: %d\n", numRighe);

    fclose(file);
    return 0;
}
