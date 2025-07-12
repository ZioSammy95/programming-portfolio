#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_segreto, tentativo;
    
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    numero_segreto = rand() % 100 + 1; // Numero casuale tra 1 e 100
    
    printf("Indovina il numero segreto tra 1 e 100!\n");

    // Usa il ciclo do-while per garantire almeno un tentativo
    do {
        printf("Inserisci il tuo tentativo: ");
        scanf("%d", &tentativo);

        if (tentativo > numero_segreto) {
            printf("Troppo alto! Riprova.\n");
        } else if (tentativo < numero_segreto) {
            printf("Troppo basso! Riprova.\n");
        }
    } while (tentativo != numero_segreto); // Continua finché non viene indovinato

    printf("Complimenti! Hai indovinato il numero segreto.\n");

    return 0;
}
