#include <stdio.h>

int main() {
    int a = 5, b = 10;  // Due variabili intere
    int temp;  // Variabile temporanea per lo scambio

    printf("Prima dello scambio: a = %d, b = %d\n", a, b);

    // Scambio dei valori
    temp = a;  // Salva il valore di a in temp
    a = b;     // Assegna a il valore di b
    b = temp;  // Assegna b il valore di temp (che è il valore originale di a)

    printf("Dopo lo scambio: a = %d, b = %d\n", a, b);

    return 0;
}
