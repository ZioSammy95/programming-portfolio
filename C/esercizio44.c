#include <stdio.h>

int main() {
    int anno;

    // Chiede all'utente di inserire un anno
    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    // Verifica se è un secolo usando l'operatore ternario
    (anno % 100 == 0) ? printf("L'anno %d è un secolo.\n", anno) 
                      : printf("L'anno %d non è un secolo.\n", anno);

    return 0;
}
