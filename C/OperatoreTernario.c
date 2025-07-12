#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main() 
{
    int x = 190;
    int y = (x < 5 ) ? 5: (x >= 10 && x <= 20) ? 10 : 100;
  


    printf( "%d", y );

    return 0;
}