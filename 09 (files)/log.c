#include <stdio.h>
#include <time.h>

// Dichiarazione del file di log a livello globale
FILE *logFile;

// Funzione per scrivere i messaggi di log
void writeLog(const char *message) {
    // Otteniamo il timestamp corrente
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Scriviamo il messaggio di log nel formato desiderato
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}

int main(int argc, char *argv[]) {
    // Apertura del file di log in modalità append
    logFile = fopen("log.txt", "a");
    if (logFile == NULL) {
        perror("Errore durante l'apertura del file di log");
        return 1;
    }

    // Scriviamo alcuni messaggi di log
    writeLog("Messaggio di log 1");
    writeLog("Messaggio di log 2");
    writeLog("Inizio del programma");
    
    // Puoi chiamare writeLog() con altri messaggi
    writeLog("Operazione completata con successo");
    
    // Chiusura del file di log
    fclose(logFile);
    return 0;
}
