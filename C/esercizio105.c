#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[100], stringa2[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa1);

    strcpy(stringa2, stringa1);

    printf("La stringa copiata è: %s\n", stringa2);

    return 0;
}