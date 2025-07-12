#include <stdio.h>
#include <math.h>

enum Costanti {
    PI = 314159,
    GRAVITA = 981,
    VELOCITA_LUCE = 299792458
};

int main() {
    float raggio = 5.0;
    float area = PI * raggio * raggio;

    printf("L'area del cerchio è %f\n", area);

    return 0;
}
