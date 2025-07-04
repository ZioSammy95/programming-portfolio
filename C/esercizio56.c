#include <stdio.h>

int main() {
    float peso, altezza, imc;

    printf("Inserisci il peso in kg: ");
    scanf("%f", &peso);

    printf("Inserisci l'altezza in metri: ");
    scanf("%f", &altezza);

    imc = peso / (altezza * altezza);

    switch ((int)imc) {
        case 0 ... 18:
            printf("Sottopeso\n");
            break;
        case 19 ... 24:
            printf("Normale\n");
            break;
        case 25 ... 29:
            printf("Sovrappeso\n");
            break;
        default:
            printf("Obeso\n");
    }

    return 0;
}
