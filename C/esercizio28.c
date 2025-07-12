#include <stdio.h>

int main() {
    int numero;

    // Chiedi all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Controlla se è positivo, negativo o zero
    if (numero > 0) {
        printf("Il numero è positivo.\n");
    } else if (numero < 0) {
        printf("Il numero è negativo.\n");
    } else {
        printf("Il numero è zero.\n");
    }

    return 0;
}
