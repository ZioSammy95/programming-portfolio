#include <stdio.h>

int main() {
    int minuti;
    float costo;

    // Chiede all'utente di inserire la durata della chiamata in minuti
    printf("Inserisci la durata della chiamata in minuti: ");
    scanf("%d", &minuti);

    // Calcola il costo usando l'operatore ternario
    costo = (minuti > 0) ? minuti * 0.50 : 0;

    // Stampa il costo della chiamata
    printf("Il costo della chiamata è: %.2f euro\n", costo);

    return 0;
}
