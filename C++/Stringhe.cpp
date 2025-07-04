#include <iostream>
#include <string>

using std::string;

int main()
{

    eta [0] = 'S'; // Cambiare carattere stringa
    string nome = "samuele";
    string cognome = "virgillito";
    string nome_completo = nome + cognome ; // Concatenare stringa
    string x = "ciao ele";

     std::cout << nome[nome.lenght() -1] << std::endl;
     std::cout << nome.append("ciao") << std::endl;
     std::cout << x.empty() << std::endl;
     std::cout << x.clear() << std::endl;
     std::cout << x.find("ele") << std::endl;
     std::cout << x.substr(1, 1)<< std::endl;
     std::cout << x.replace(1, 3, "IAO") << std::endl;

     return 0;

}