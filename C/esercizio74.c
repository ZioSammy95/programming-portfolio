#include <stdio.h>

int main() {
    int somma = 0;

    for (int i = 1; i <= 100; i++) {
        somma += i;

        if (somma >= 500) {
            break;
        }
    }

    printf("La somma dei numeri è: %d\n", somma);

    return 0;
}
