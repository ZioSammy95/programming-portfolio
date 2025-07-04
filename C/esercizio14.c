#include <stdio.h>

int main() {
    int numero = 42;      // Variabile intera
    int* punt = &numero;  // Puntatore a int, assegnato all'indirizzo di numero

    // Stampa dell'indirizzo di memoria di numero tramite il puntatore
    printf("L'indirizzo di memoria di numero è: %p\n", (void*)punt);
    printf("Il valore di numero tramite il puntatore è: %d\n", *punt);

    return 0;
}