#include <stdio.h>

int main() {
    int numero, valore_assoluto;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    // Calcola il valore assoluto usando l'operatore ternario
    valore_assoluto = (numero < 0) ? -numero : numero;

    // Stampa il risultato
    printf("Il valore assoluto di %d è %d.\n", numero, valore_assoluto);

    return 0;
}
