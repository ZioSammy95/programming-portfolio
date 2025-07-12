#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

class Persona
{
public:
  
virtual void saluta() = 0;  // INTERFACCIA

};

class Studente : private Persona 
{
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
