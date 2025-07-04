#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Errore: devi inserire un numero positivo.\n");
        }
    } while (numero <= 0);

    printf("Hai inserito il numero positivo: %d\n", numero);
    
    return 0;
}
