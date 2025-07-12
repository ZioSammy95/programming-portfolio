#include <stdio.h>

int main() {
    int durata;
    float costo;

    // Chiede all'utente di inserire la durata della chiamata in minuti
    printf("Inserisci la durata della chiamata in minuti: ");
    scanf("%d", &durata);

    // Calcola il costo della chiamata (0.50 euro per minuto)
    costo = durata * 0.50;

    // Stampa il costo
    printf("Il costo della chiamata è: %.2f euro\n", costo);

    return 0;
}
