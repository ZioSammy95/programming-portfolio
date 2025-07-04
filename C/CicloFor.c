#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

int main()
{
    char colonna;
    int riga;
    
    for(colonna = 'A' ; colonna <= 'D'; colonna++)
    {
    
        for(riga = 1 ; riga <= 5 ; riga++){
            printf("%c%d\n", colonna , riga);

        }

       printf("%c\n", colonna);
        
    
    }
    return 0;
}