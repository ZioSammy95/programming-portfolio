#include <stdio.h>

int main() {
    int eta;

    // Chiede all'utente di inserire l'età
    printf("Inserisci la tua età: ");
    scanf("%d", &eta);

    // Verifica se la persona è maggiorenne
    if (eta >= 18) {
        printf("Sei maggiorenne.\n");
    } else {
        printf("Sei minorenne.\n");
    }

    return 0;
}
