#include <stdio.h>

int main() {
    int numero;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Controlla se è multiplo di 5 e/o di 7
    if (numero % 5 == 0 && numero % 7 == 0) {
        printf("Il numero %d è multiplo sia di 5 che di 7.\n", numero);
    } else if (numero % 5 == 0) {
        printf("Il numero %d è multiplo di 5.\n", numero);
    } else if (numero % 7 == 0) {
        printf("Il numero %d è multiplo di 7.\n", numero);
    } else {
        printf("Il numero %d non è multiplo né di 5 né di 7.\n", numero);
    }

    return 0;
}
