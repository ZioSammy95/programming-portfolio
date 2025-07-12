#include <stdio.h>

int main() {
    char carattere;

    // Chiede all'utente di inserire un carattere
    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere); // Spazio prima di %c per evitare problemi con input precedenti

    // Verifica il tipo di carattere usando l'operatore ternario annidato
    (carattere >= 'A' && carattere <= 'Z') ? printf("È una lettera maiuscola.\n") :
    (carattere >= 'a' && carattere <= 'z') ? printf("È una lettera minuscola.\n") :
    (carattere >= '0' && carattere <= '9') ? printf("È un numero.\n") :
                                             printf("Non è una lettera né un numero.\n");

    return 0;
}
