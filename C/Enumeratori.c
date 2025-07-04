#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"

enum Difficolta{
    FACILE,
    MEDIO,
    DIFFICILE
};

int main()
{
    enum Difficolta difficolta = DIFFICILE;

    switch (difficolta)
    {
        case  FACILE:
        printf("livello facile");
        break;

        case  MEDIO:
        printf("livello medio");
        break;

        case DIFFICILE:
        printf("livello difficile");
        break;

        default:
        printf("difficolta non conosciuta");
        break;
    }


    return 0;

}