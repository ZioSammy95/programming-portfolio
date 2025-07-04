#include <stdio.h>

int main() {
    char carattere;

    // Chiede all'utente di inserire un carattere
    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere); // Lo spazio prima di %c evita problemi con i buffer di input

    // Controlla se è una lettera maiuscola, minuscola o un numero
    if (carattere >= 'A' && carattere <= 'Z') {
        printf("Il carattere '%c' è una lettera maiuscola.\n", carattere);
    } else if (carattere >= 'a' && carattere <= 'z') {
        printf("Il carattere '%c' è una lettera minuscola.\n", carattere);
    } else if (carattere >= '0' && carattere <= '9') {
        printf("Il carattere '%c' è un numero.\n", carattere);
    } else {
        printf("Il carattere '%c' non è una lettera né un numero.\n", carattere);
    }

    return 0;
}
