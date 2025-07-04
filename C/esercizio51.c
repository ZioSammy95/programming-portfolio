#include <stdio.h>

int main() {
    int punteggio;
    char letteraValutazione;

    printf("Inserisci il punteggio: ");
    scanf("%d", &punteggio);

    switch (punteggio / 10) {
        case 10:
        case 9:
            letteraValutazione = 'A';
            break;
        case 8:
            letteraValutazione = 'B';
            break;
        case 7:
            letteraValutazione = 'C';
            break;
        case 6:
            letteraValutazione = 'D';
            break;
        default:
            letteraValutazione = 'F';
    }

    printf("La lettera di valutazione è: %c\n", letteraValutazione);

    return 0;
}
