#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"


struct Persona {
    char nome[20];
    int eta;
};

int main() {
    struct Persona persona;

    printf("Inserisci il nome: ");
    scanf("%s", persona.nome);

    printf("Inserisci l'età: ");
    scanf("%d", &persona.eta);

    printf("Dati della persona:\n");
    printf("Nome: %s\n", persona.nome);
    printf("Età: %d\n", persona.eta);

    return 0;
}
