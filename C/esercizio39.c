#include <stdio.h>

int main() {
    int numero;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Verifica se è pari o dispari usando l'operatore ternario
    (numero % 2 == 0) ? printf("Il numero è pari.\n") : printf("Il numero è dispari.\n");

    return 0;
}
