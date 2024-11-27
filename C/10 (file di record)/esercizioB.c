#include <stdio.h>
#include <string.h>

#define NUM_RECORD 3

typedef struct {
    int giorno;
    int mese;
    int anno;
} data;

typedef struct {
    char cognome[25];
    int voti[3];
    data n;
} persona;

void inserisciRecord(char NomeFile[]);
void stampaFile(char NomeFile[]);
int ricercaRecord(char NomeFile[], char cognome[]);
void correggiRecord(char NomeFile[]);

int main() {
    int ricerca, r;
    char cogn[25];
    char NomeFile[] = "persona.dat";

    inserisciRecord(NomeFile);

    stampaFile(NomeFile);

    printf("Inserisci un cognome da cercare: ");
    scanf("%s", cogn);
    ricerca = ricercaRecord(NomeFile, cogn);
    if (ricerca != -1) {
        printf("Il cognome si trova alla posizione numero %d\n", ricerca);
    } else {
        printf("Cognome non trovato.\n");
    }

    correggiRecord(NomeFile);
}

void inserisciRecord(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "wb");
    if (file == NULL) {
        printf("Errore nell'aprire il file.\n");
        return;
    }

    persona buffer;
    for (int i = 0; i < NUM_RECORD; i++) {
        printf("\nInserisci cognome: ");
        scanf("%s", buffer.cognome);

        printf("Inserisci giorno di nascita (GG): ");
        scanf("%02d", &buffer.n.giorno);
        printf("Inserisci mese di nascita (MM): ");
        scanf("%02d", &buffer.n.mese);
        printf("Inserisci anno di nascita (AAAA): ");
        scanf("%04d", &buffer.n.anno);

        for (int j = 0; j < 3; j++) {
            printf("Inserisci voto %d: ", j + 1);
            scanf("%d", &buffer.voti[j]);
        }
        fwrite(&buffer, sizeof(persona), 1, file);
    }

    fclose(file);
}

void stampaFile(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "rb");
    if (file == NULL) {
        printf("Errore nell'aprire il file.\n");
        return;
    }

    persona buffer;
    while (fread(&buffer, sizeof(persona), 1, file) == 1) {
        printf("COGNOME: %s\n", buffer.cognome);
        printf("Voti: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", buffer.voti[i]);
        }
        printf("\n");
    }

    fclose(file);
}

int ricercaRecord(char NomeFile[], char cognome[]) {
    FILE *file = fopen(NomeFile, "rb");
    if (file == NULL) {
        printf("Errore nell'aprire il file.\n");
        return -1;
    }

    int posizione1 = -1, i = 0;
    persona buffer;

    while (fread(&buffer, sizeof(persona), 1, file) == 1) {
        int sommaVoti = 0;
        float mediaVoti = 0;

        if (strcmp(buffer.cognome, cognome) == 0) {
            if (posizione1 == -1) {
                posizione1 = i;
            }

            for (int j = 0; j < 3; j++) {
                sommaVoti += buffer.voti[j];
            }
            mediaVoti = (float)sommaVoti / 3;

            int eta = 2024 - buffer.n.anno;

            printf("Cognome: %-25s, Media: %.2f, Età: %d\n", buffer.cognome, mediaVoti, eta);
        }

        i++;
    }

    fclose(file);
    return posizione1;
}

void correggiRecord(char NomeFile[]) {
    FILE *file = fopen(NomeFile, "r+b");
    if (file == NULL) {
        printf("Errore nell'aprire il file.\n");
        return;
    }

    int posizione;
    char cognome[25];
    printf("Inserisci il cognome da correggere: ");
    scanf("%s", cognome);

    persona buffer;
    while (fread(&buffer, sizeof(persona), 1, file) == 1) {
        if (strcmp(buffer.cognome, cognome) == 0) {
            printf("Modifica i dati per %s:\n", buffer.cognome);

            printf("Inserisci giorno di nascita (GG): ");
            scanf("%02d", &buffer.n.giorno);
            printf("Inserisci mese di nascita (MM): ");
            scanf("%02d", &buffer.n.mese);
            printf("Inserisci anno di nascita (AAAA): ");
            scanf("%04d", &buffer.n.anno);

            for (int i = 0; i < 3; i++) {
                printf("Inserisci voto %d: ", i + 1);
                scanf("%d", &buffer.voti[i]);
            }

            fseek(file, -sizeof(persona), SEEK_CUR);
            fwrite(&buffer, sizeof(persona), 1, file);
            break;
        }
    }

    fclose(file);
    stampaFile(NomeFile);
}
