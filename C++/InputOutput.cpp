#include <iostream>
#include <string>
using std::string;

int main()
{
    string nome;
    string cognome;
    int eta;

    std::cout << "Scrivi il nome: " << std::endl;
    std::cin >> nome;

    std::cout << "Scrivi il cognome: " << std::endl;
    std::cin >> cognome;

    std::cout << "Scrivi l'età: " << std::endl;
    std::cin >> eta;

    std::cout << "Ciao " << nome << " " << cognome << ", di anni " << eta << std::endl;

    return 0;
}
