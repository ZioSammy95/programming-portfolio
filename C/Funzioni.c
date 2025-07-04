#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"

int somma(int x, int y);

int main()
{
    int z = somma(100, 51);
    printf("%d\n", z);
    

    return 0;
}

int somma(int x, int y);
{
    
    int risultato = x + y + 100;
    return risultato;
}

