#include <stdio.h>

int main() {
    char nome[100];

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("Benvenuto, %s!\n", nome);

    return 0;
}
