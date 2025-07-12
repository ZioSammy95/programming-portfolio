#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "FunzioniUtili.h"

struct Persona {
    char nome [10];
    char cognome [10];
    int eta ;

};

void presentaPersona(struct Persona persona){
    printf("%s\n", persona.nome);
    printf("%s\n", persona.cognome);
    printf("%d\n", persona.eta);
}

int main()
{
    struct Persona persona1;
    strcpy(persona1.nome,"Samuele");
    strcpy(persona1.cognome,"Virgillito");
    persona1.eta= 30;
   
    struct Persona persona2;
    strcpy(persona2.nome,"Mario");
    strcpy(persona2.cognome,"Rossi");
    persona2.eta= 37;

    presentaPersona(persona1);
    presentaPersona(persona2);

    return 0;
}