#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

int varGlobale = 100;

int main() 
{
    int x = 10;

    if (x == 10)
    {
        int x = 99;
        int y = 23;
        printf("%d\n", x);

    }
        printf("%d", x);
    
    return 0;
}