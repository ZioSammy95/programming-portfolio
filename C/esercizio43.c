#include <stdio.h>

int main() {
    int num1, num2, massimo;

    // Chiede all'utente di inserire due numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Determina il massimo usando l'operatore ternario
    massimo = (num1 > num2) ? num1 : num2;

    // Stampa il risultato
    printf("Il numero maggiore è: %d\n", massimo);

    return 0;
}
