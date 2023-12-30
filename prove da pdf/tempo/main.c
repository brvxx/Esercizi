#define _CRT_SECURE_NO_WARNINGS  // Per evitare eventuali avvisi riguardo a funzioni considerate non sicure
#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm result;

    // Ottieni il tempo corrente in formato epoch
    time(&now);

    // Converte il tempo corrente in tempo locale utilizzando localtime_s
    if (localtime_s(&result, &now) == 0) {
        // Accesso ai membri della struttura tm
        printf("Ora locale: %02d:%02d:%02d\n", result.tm_hour, result.tm_min, result.tm_sec);
    }
    else {
        // Gestione dell'errore
        perror("Errore nella conversione del tempo locale");
    }

    return 0;
}