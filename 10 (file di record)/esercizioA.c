#include <stdio.h>
#include <string.h>
#define NUM_STUDENTI 10

typedef struct {
    char cognome[50];
    int voti[3];
} Studente;

void salvaSuFile();
void caricaDaFile();
int trovaCognome(char cogn[]);
void stampaDettagli();

int main() {
    char cognomeInserito[50];

    salvaSuFile();
    caricaDaFile();

    printf("\nInserisci un cognome da cercare: ");
    scanf("%s", cognomeInserito);
    int conteggio = trovaCognome(cognomeInserito);
    
    if (conteggio > 0) {
        printf("Il cognome %s è stato trovato %d volte\n", cognomeInserito, conteggio);
    } else { 
        printf("Il cognome %s non è stato trovato\n", cognomeInserito);
    }

    stampaDettagli();

    return 0;
}

void salvaSuFile() {
    FILE *file = fopen("studenti.dat", "wb");
    Studente studenti[NUM_STUDENTI];

    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

    for (int i = 0; i < NUM_STUDENTI; i++) {
        printf("Inserisci il cognome dello studente: ");
        scanf("%s", studenti[i].cognome);
        
        for (int j = 0; j < 3; j++) {
            printf("Inserisci il voto #%d: ", j + 1);
            scanf("%d", &studenti[i].voti[j]);
        }
        
        fwrite(&studenti[i], sizeof(Studente), 1, file);
    }
    fclose(file);
}

void caricaDaFile() {
    FILE *file = fopen("studenti.dat", "rb");
    Studente studente;

    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

    while (fread(&studente, sizeof(studente), 1, file) == 1) {
        printf("Cognome: %s\n", studente.cognome);
        
        printf("Voti: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", studente.voti[i]);
        }
        printf("\n");
    }
    fclose(file);
}

int trovaCognome(char cogn[]) {
    FILE *file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return 0;
    }
    
    Studente studente;
    int conteggio = 0;

    while (fread(&studente, sizeof(Studente), 1, file) == 1) {
        if (strcmp(studente.cognome, cogn) == 0) {
            conteggio++;
        }
    }
    fclose(file);
    return conteggio;
}

void stampaDettagli() {
    FILE *file = fopen("studenti.dat", "rb");
    
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }
    
    Studente studente;

    while (fread(&studente, sizeof(Studente), 1, file) == 1) {
        int maxVoto = 0, minVoto = 10, sommaVoti = 0;
        
        for (int i = 0; i < 3; i++) {
            sommaVoti += studente.voti[i];
            if (studente.voti[i] > maxVoto) {
                maxVoto = studente.voti[i];
            }
            if (studente.voti[i] < minVoto) {
                minVoto = studente.voti[i];
            }
        }
        
        float mediaVoti = (float) sommaVoti / 3;
        
        printf("Cognome: %s, Media: %.2f, Voto massimo: %d, Voto minimo: %d\n", studente.cognome, mediaVoti, maxVoto, minVoto);
        printf("\n");
    }
    fclose(file);
}
