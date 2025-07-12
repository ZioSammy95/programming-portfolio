#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "en-US.UTF-8");
    int giornoSettimana = 3;
    
    switch (giornoSettimana) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("giorno feriale");
        break;
        
        
        case 6:   
        case 7:
            printf("giorno festivo");
            break;
        
            default:
            printf("non ci sono più di 7 giorni.");
    }

    return 0;
}
