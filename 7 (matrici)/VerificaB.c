#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 10
#define C 10

int Primo(int x);
void inserisci (int v[], int x);
int Sostituisci(int v[]);
void Copiamultipli (int v [], int v2[], int x);
void caricam(int m[][C]);
int Somma (int m[][C], int y);
int Cerca(int m [][C], int x, int k);
int ContaCompresi (int m[][C], int h, int k);

int main() 
{
    int v[C], v2[C], m[R][C];
    srand(time(NULL));

    inserisci(v, 4);

    int sostituzioni = Sostituisci(v);
    printf("Elementi sostituiti: %d\n", sostituzioni);

    Copiamultipli(v, v2, 5);

    caricam(m);

    int somma = Somma(m, 6);
    printf("Somma dei numeri primi nella colonna 6: %d\n", somma);

    int trovato = Cerca(m, 2, 7);  // Controlla la riga 2 per il numero 7
    printf("%d\n", trovato);

    int conta = ContaCompresi(m, 20, 50);
    printf("Elementi compresi tra h e k: %d", conta);

    return 0;
}

int Primo(int x) {
	int i;
    for (i = 2; i*i <= x; i++) {
        if (x % i == 0) 
			return 0;
    }
    return 1;
}

void inserisci(int v[], int x) {
	int i;
    for (i = x; i < C; i++) {
        v[i] = i;
    }
}

int Sostituisci(int v[]) 
{
    int cont = 0, i;
    for (i = 0; i < C; i++) {
        if (v[i] % 2 != 0) {
            v[i] = 0;
            cont++;
        }
    }
    return cont;
}

void Copiamultipli(int v[], int v2[], int x) {
	int i;
    for (i = 0; i < C; i++) {
        if (v[i] % x == 0) {
            v2[i] = v[i];
        } else {
            v2[i] = 0;
        }
    }
}

void caricam(int m[][C]) {
	int i, j;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            m[i][j] = rand() % 151 + 50;
        }
    }
}

int Somma(int m[][C], int y) {
    int somma = 0, i;
    for (i = 0; i < R; i++) {
        if (Primo(m[i][y])==0) {
            somma += m[i][y];
        }
    }
    return somma;
}

int Cerca(int m[][C], int x, int k) {
	int j;
    for (j = 0; j < C; j++) {
        if (m[x][j] == k) {
            return 1;
        }
    }
    return 0;
}

int ContaCompresi(int m[][C], int h, int k) {
    int cont = 0, i, j;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (m[i][j] >= h && m[i][j] <= k) {
                cont++;
            }
        }
    }
    return cont;
}
