#include <stdio.h>

int main() {
    float numero_decimale = 3.14;  // Variabile float
    int numero_intero;  // Variabile intera

    numero_intero = (int) numero_decimale;  // Casting esplicito da float a int

    printf("Valore float: %f\n", numero_decimale);
    printf("Valore intero dopo il casting: %d\n", numero_intero);

    return 0;
}
