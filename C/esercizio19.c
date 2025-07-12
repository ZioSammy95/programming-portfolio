#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int numero1, numero2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    bool confronto = (numero1 == numero2);

    printf("I due numeri sono uguali: %d\n", confronto);

    return 0;
}