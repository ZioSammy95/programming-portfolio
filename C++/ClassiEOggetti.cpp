#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

class Persona
{
    public: // PUBBLICO 
    string nome; // ATTRIBUTI
    string cognome; // ATTRIBUTI
    int eta; // ATTRIBUTI

    void saluta(string nome) // PRENDE UN PARAMETRO
{
    std::cout << "Ciao sono " << this->nome << " tu sei " << nome << std::endl;
}

};

int main()
{
    Persona persona1;
    Persona persona2;
    persona1.nome = "Samuele";
    persona2.nome = "Luca";

    persona1.saluta("x"); // STAMPA IO SONO x
    persona2.saluta("y"); // STAMPA IO SONO y

   // std::cout <<"Ciao sono " << persona1.nome << std::endl;
   // std::cout <<"Ciao sono " << persona2.nome << std::endl;

    return 0;
}