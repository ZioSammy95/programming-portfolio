#include <stdio.h>

enum Colori {
   
    Arancione = 1,
    Blu = 2,
    Bianco = 3,
    Rosso = 4
};

int main() {
    enum Colori colorePreferito = Arancione;

    printf("Il mio colore preferito ha valore %d\n", colorePreferito);

    return 0;
}
