#include <stdio.h>

enum GiorniSettimana {
    Lunedi,
    Martedi,
    Mercoledi,
    Giovedi,
    Venerdi,
    Sabato,
    Domenica
};

int main() {
    enum GiorniSettimana oggi = Martedi;

    printf("Oggi è %d\n", oggi);

    return 0;
}