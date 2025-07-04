#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

class Persona
{
public:
    string nome;
    string cognome;

    Persona(string nome, string cognome)
   {
    this->nome = nome;
    this->cognome = cognome;
   }
    virtual void saluta() = 0;  // LA CLASSE DIVENTA ASTRATTA 
};

class Studente : private Persona {
public:
      string classe;
      Studente(string nome, string cognome, string classe) : Persona(nome,cognome)
      {
        this->classe = classe;
      }

      void saluta() override {
        std::cout << " Ciao sono " << nome << std::endl;
      }
};

int main() 
{
   // Persona persona1("Samuele", "Virgillito");
    Studente studente1("Samuele", "Virgillito", "4A");
    studente1.saluta();
   

    return 0;
}
