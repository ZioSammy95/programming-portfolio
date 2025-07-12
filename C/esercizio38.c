#include <stdio.h>

int main() {
    int numero;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Verifica se è positivo, negativo o zero usando l'operatore ternario
    (numero > 0) ? printf("Il numero è positivo.\n") : 
    (numero < 0) ? printf("Il numero è negativo.\n") : 
                   printf("Il numero è zero.\n");

    return 0;
}
