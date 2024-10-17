#include <stdio.h>

typedef struct {
   int sec;
   int min;
   int ore;
} tempo1, tempo2, differenza;

void calcolodiff(tempo1 t1, tempo2 t2, differenza *diff);

int main() {
    system("color 3"); // colore testo blu
    tempo1 t1;
    tempo2 t2;
    differenza diff;

    // assegnazione tempi
    t1.ore = 5;
    t1.min = 15;
    t1.sec = 10;

    t2.ore = 2;
    t2.min = 35;
    t2.sec = 20;

    // chiamo la funzione che calcola la differenza tra i due tempi
    calcolodiff(t1, t2, &diff);

    printf("Differenza: %d ore, %d minuti, %d secondi\n", diff.ore, diff.min, diff.sec);

    return 0;
}

void calcolodiff(tempo1 t1, tempo2 t2, differenza *diff) {
    if (t1.sec < t2.sec) {
        t1.min -= 1;
        t1.sec += 60;
    }
    diff->sec = t1.sec - t2.sec;

    if (t1.min < t2.min) {
        t1.ore -= 1;
        t1.min += 60;
    }
    diff->min = t1.min - t2.min;

    if (t1.ore < t2.ore) {
        printf("ERRORE: Il primo tempo è minore del secondo tempo\n");
        return;
    }
    diff->ore = t1.ore - t2.ore;
}
