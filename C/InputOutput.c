#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"

int main()
{
    int x;
    int y;
    char carattere; 
   
   
printf("inserisci due numeri e un carattere separati da spazio:\n");
scanf("%d %d %c",&x, &y, &carattere);
    
printf("%d %d %c",x, y, carattere);
return 0;
}