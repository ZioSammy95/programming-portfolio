#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;

class Persona
{
    public:  // PRIVATO 
    string nome; // ATTRIBUTI
   

    public:  // PUBBLICO
    string cognome;
    int eta;

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

    void prova()
    {
        saluta();
    }
    
    private:
    void saluta()
{
    std::cout << "Ciao sono " << nome << std::endl;
}

};

int main()
{
    
    Persona persona3("Anna", "Neri");
    Persona persona4("Leonardo", "Davinci", 30);


    persona3.prova();
    persona4.prova();
    persona3.cognome = "eroituotre";



   std::cout <<"Ciao sono " << persona3.nome << std::endl;
   // std::cout <<"Ciao sono " << persona2.nome << std::endl;

    return 0;
}
