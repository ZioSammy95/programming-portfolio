#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"

int main()
{

FILE *file = fopen("prova.txt", "a");
if(file == NULL){
    printf("impossibile aprire il file\n");
 return 1;
}

char contenuto[100];
while (fgets(contenuto, 100, file)){
    printf("%s", contenuto);
}

fclose(file);
return 0;
    


}