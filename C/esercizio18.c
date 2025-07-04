#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a = 2;
    int b = 4;
    
    bool condizione1 = a == b;
    bool condizione2 = a != b;
    bool condizione3 = a > b;
    bool condizione4 = a < b;
    bool condizione5 = a <= b;
    bool condizione6 = a >= b;


    printf("%d", condizione1); 
    printf("%d", condizione2);
    printf("%d", condizione3);
    printf("%d", condizione4);
    printf("%d", condizione5);
    printf("%d", condizione6);



    return 0;
}