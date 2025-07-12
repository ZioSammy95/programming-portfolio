#include <stdio.h>

int main() {
    int base, esponente;
    int potenza = 1;

    printf("Inserisci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    for (int i = 1; i <= esponente; i++) {
        potenza *= base;
    }

    printf("%d elevato a %d è: %d\n", base, esponente, potenza);

    return 0;
}