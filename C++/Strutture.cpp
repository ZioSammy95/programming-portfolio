#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

  struct Persona
    {
        string nome;
        string cognome;
        int eta;
    };

int main()
{
   Persona persona1 = {"Samuele", "Virgillito", 30};

   std::cout << persona1.nome << std::endl;
   std::cout << persona1.cognome << std::endl;
   std::cout << persona1.eta << std::endl;



}