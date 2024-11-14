#include <stdio.h>

int main() {
    FILE *file = fopen("testi/numeri.txt", "r");
    FILE *filePari = fopen("testi/NumPari.txt", "w");
    FILE *fileDispari = fopen("testi/NumDispari.txt", "w");

    if (file == NULL || filePari == NULL || fileDispari == NULL) {
        perror("Errore durante apertura di un file");
        return 1;
    }

    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(filePari, "%d ", num);
        } else {
            fprintf(fileDispari, "%d ", num);
        }
    }

    fclose(file);                                                                                                                          
    fclose(filePari);
    fclose(fileDispari);
    return 0;
}
