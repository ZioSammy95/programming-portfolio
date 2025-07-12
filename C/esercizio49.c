#include <stdio.h>

int main() {
    int eta;
    float costoBiglietto;

    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    switch (eta) {
        case 0 ... 3:
            costoBiglietto = 0;
            break;
        case 4 ... 12:
            costoBiglietto = 5;
            break;
        case 13 ... 17:
            costoBiglietto = 8;
            break;
        case 18 ... 65:
            costoBiglietto = 12;
            break;
        default:
            costoBiglietto = 6;
    }

    printf("Il costo del biglietto è: %.2f euro\n", costoBiglietto);

    return 0;
}
