#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

class Persona
{
    public:  // PUBBLICO 
    string nome; // ATTRIBUTI
    string cognome; // ATTRIBUTI
    int eta; // ATTRIBUTI

    Persona()
    {
        nome = "abchdjfdnfkjnv";
        cognome = "nkjbnvkjbdjkvnjn";
        eta = 1000;
    }

        Persona(string nome) 

    {
        this->nome = nome;
        

    }
     Persona(string nome , string cognome)
    {   this->nome = nome;
        this->cognome = cognome;
    }
    Persona(string nome , string cognome , int eta)  // COSTRUTTORE
    {
        this->nome = nome;
        this->cognome = cognome;
        this->eta = eta;

    }
    
    void saluta()
{
    std::cout << "Ciao sono " << nome << std::endl;
}

};

int main()
{
    Persona persona1;
    Persona persona2("Luca");
    Persona persona3("Anna", "Neri");
    Persona persona4("Leonardo", "Davinci", 30);

    persona1.saluta();
    persona2.saluta();
    persona3.saluta();
    persona4.saluta();



   // std::cout <<"Ciao sono " << persona1.nome << std::endl;
   // std::cout <<"Ciao sono " << persona2.nome << std::endl;

    return 0;
}

