#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main() 
{
    int x = 0;

    if (x < 5)
    {
        printf("minore di 5");
    } 
    else if (x >= 5 && x <= 10)
    {
        printf("minore di 100");
    }
    else 
    {
        printf("superiore a 100");
    }

    
    return 0;
}