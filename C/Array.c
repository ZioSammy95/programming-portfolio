#include <stdio.h>
#include <stdbool.h>



int main() 
{
    int matrice[3][3] = {{10, 20, 30},
                        {40, 50, 60},
                        {70, 80, 90}};
for (int riga = 0; riga < 3; riga++){
    for (int colonna = 0; colonna < 3; colonna++)
    {
        printf("%d\n", matrice[riga][colonna]);
    }
}
    return 0;
}
