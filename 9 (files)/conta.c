#include <stdio.h>

int main() {
    FILE* file = fopen("testi/Nomi.txt", "r");
    int carattere;
    int conta_caratteri = 0, conta_parole = 0, conta_righe = 0;
    int in_parola = 0;

    if (file == NULL) {
        perror("Errore durante apertura file");
        return 1;
    }

    while ((carattere = fgetc(file)) != EOF) {
        // Controllo dei caratteri validi (non spazio, tab o a capo)
        if (carattere != ' ' && carattere != '\t' && carattere != '\n') {
            conta_caratteri++;  // Conta solo i caratteri non spazi

            // Controlla se siamo in una parola
            if (in_parola==0) {
                conta_parole++;  // Nuova parola trovata
                in_parola = 1;
            }
        } else {
            // Se troviamo uno spazio, tabulazione o a capo, significa fine parola
            in_parola = 0;

            // Conta le righe ogni volta che trova un newline
            if (carattere == '\n') {
                conta_righe++;
            }
        }
    }

    // Se l'ultima riga non termina con '\n', conta la riga
    if (conta_caratteri > 0 && carattere != '\n') {
        conta_righe++;
    }

    // Chiude il file
    fclose(file);

    // Stampa i risultati
    printf("Numero di caratteri (senza spazi, tabulazioni, a capo): %d\n", conta_caratteri);
    printf("Numero di parole: %d\n", conta_parole);
    printf("Numero di righe: %d\n", conta_righe);

    return 0;
}
