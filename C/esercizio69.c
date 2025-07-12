#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        printf("%d ", i);
    }

    return 0;
}
