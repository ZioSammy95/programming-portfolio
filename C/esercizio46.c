#include <stdio.h>

int main() {
    int eta;

    // Chiede all'utente di inserire l'età
    printf("Inserisci l'età della persona: ");
    scanf("%d", &eta);

    // Verifica se la persona è maggiorenne usando l'operatore ternario
    (eta >= 18) ? printf("La persona è maggiorenne.\n") : printf("La persona è minorenne.\n");

    return 0;
}
