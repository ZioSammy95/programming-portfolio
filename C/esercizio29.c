#include <stdio.h>

int main() {
    int numero;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Controlla se è pari o dispari usando l'operatore modulo (%)
    if (numero % 2 == 0) {
        printf("Il numero %d è pari.\n", numero);
    } else {
        printf("Il numero %d è dispari.\n", numero);
    }

    return 0;
}
