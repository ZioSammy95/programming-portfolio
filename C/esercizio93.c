#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            printf("%d ", matrice[riga][colonna]);
        }
        printf("\n");
    }

    return 0;
}
