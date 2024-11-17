#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_STUDENTI 10

typedef struct {
    char cognome[25];
    int voti[3];
} Studente;

void salvaSuFile(char NomeFile[]);
void caricaDaFile(char NomeFile[]);
int trovaCognome(char NomeFile[], char cognomeInserito[]);
void stampaDettagli(char NomeFile[]);

int main() {
    char cognomeInserito[25];
    char NomeFile[] = "studenti.dat";

    salvaSuFile(NomeFile);
    caricaDaFile(NomeFile);

    printf("\nInserisci un cognome da cercare: ");
    scanf("%s", cognomeInserito);
    int conteggio = trovaCognome(NomeFile, cognomeInserito);
    
    if (conteggio > 0) {
        printf("Il cognome %s è stato trovato %d volte\n", cognomeInserito, conteggio);
    } else { 
        printf("Il cognome %s non è stato trovato\n", cognomeInserito);
    }

    stampaDettagli(NomeFile);

    return 0;
}

void salvaSuFile(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "wb");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

    Studente studenti[NUM_STUDENTI];

    for (int i = 0; i < NUM_STUDENTI; i++) {
        printf("Inserisci il cognome dello studente %d: ", i + 1);
        scanf("%s", studenti[i].cognome);
        
        for (int j = 0; j < 3; j++) {
            printf("Inserisci il voto #%d: ", j + 1);
            scanf("%d", &studenti[i].voti[j]);
        }

        fwrite(&studenti[i], sizeof(Studente), 1, file);
    }

    fclose(file);
}

void caricaDaFile(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "rb");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

    Studente buffer;

    while (fread(&buffer, sizeof(Studente), 1, file) == 1) {
        printf("Cognome: %s\n", buffer.cognome);
        
        printf("Voti: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", buffer.voti[i]);
        }
        printf("\n");
    }

    fclose(file);
}

int trovaCognome(char NomeFile[], char cogn[]) {
    FILE *file = fopen(NomeFile, "rb");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return 0;
    }

    Studente buffer;
    int conteggio = 0;

    while (fread(&buffer, sizeof(Studente), 1, file) == 1) {
        if (strcmp(buffer.cognome, cogn) == 0) {
            conteggio++;
        }
    }

    fclose(file);
    return conteggio;
}

void stampaDettagli(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "rb");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

    Studente buffer;

    while (fread(&buffer, sizeof(Studente), 1, file) == 1) {
        int maxVoto = buffer.voti[0];
        int minVoto = buffer.voti[0];
        int sommaVoti = 0;

        for (int i = 0; i < 3; i++) {
            sommaVoti += buffer.voti[i];
            if (buffer.voti[i] > maxVoto) {
                maxVoto = buffer.voti[i];
            }
            if (buffer.voti[i] < minVoto) {
                minVoto = buffer.voti[i];
            }
        }

        float mediaVoti = (float)sommaVoti / 3;

        printf("Cognome: %-25s, Media: %.2f, Voto massimo: %d, Voto minimo: %d\n",
               buffer.cognome, mediaVoti, maxVoto, minVoto);
    }

    fclose(file);
}
