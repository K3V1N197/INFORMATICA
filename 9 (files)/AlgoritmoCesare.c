#include <stdio.h>

void cesareCrypt(FILE *inputFile, FILE *outputFile, int key);
void cesareDecrypt(FILE *inputFile, FILE *outputFile, int key);

int main() {
    FILE* inputFile = fopen("testi/in.txt", "r");
    FILE* outputFile = fopen("testi/out.txt", "w");
    int key, scelta;

    // Chiede all'utente se vuole cifrare o decifrare
    printf("1. Cifrare\n2. Decifrare\nScegli: ");
    scanf("%d", &scelta);

    // Chiede all'utente la chiave di cifratura
    printf("Inserisci la chiave di cifratura (numero intero): ");
    scanf("%d", &key);

    if (inputFile == NULL || outputFile == NULL) {
        perror("Errore durante apertura file");
        return 1;
    }

    // Esegui cifratura o decifratura in base alla scelta dell'utente
    switch (scelta)
    {
    case 1:
        cesareCrypt(inputFile, outputFile, key);
        printf("File cifrato con successo!\n");
        break;
    case 2:
        cesareDecrypt(inputFile, outputFile, key);
        printf("File decifrato con successo!\n");
        break;
    default:
        printf("Scelta non valida!\n");
        break;
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
// Funzione per cifrare un file usando l'algoritmo di Cesare
void cesareCrypt(FILE *inputFile, FILE *outputFile, int key) {
    int carattere;

    while ((carattere = fgetc(inputFile)) != EOF) {
        // Se il carattere è una lettera maiuscola
        if (carattere >= 'A' && carattere <= 'Z') {
            carattere = ((carattere - 'A' + key) % 26) + 'A';
        }
        // Se il carattere è una lettera minuscola
        else if (carattere >= 'a' && carattere <= 'z') {
            carattere = ((carattere - 'a' + key) % 26) + 'a';
        }

        fputc(carattere, outputFile);
    }
}

// Funzione per decifrare un file cifrato con l'algoritmo di Cesare
void cesareDecrypt(FILE *inputFile, FILE *outputFile, int key) {
    int carattere;

    // Scorriamo il file input carattere per carattere
    while ((carattere = fgetc(inputFile)) != EOF) {
        // Se il carattere è una lettera maiuscola
        if (carattere >= 'A' && carattere <= 'Z') {
            carattere = ((carattere - 'A' - key + 26) % 26) + 'A';
        }
        // Se il carattere è una lettera minuscola
        else if (carattere >= 'a' && carattere <= 'z') {
            carattere = ((carattere - 'a' - key + 26) % 26) + 'a';
        }

        fputc(carattere, outputFile);
    }
}