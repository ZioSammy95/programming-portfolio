#include <iostream>
#include <string>

using std::string;

int main()
{
   // int x = 5;
   // int y = 5;
   // int z = (x + y) * 2 - 3 ;
   
    int eta = 20;
    eta += 5; // SOMMA CON ASSEGNAZIONE
    eta -= 5; // DIFFERENZA CON ASSEGNAZIONE
    eta *= 5; // MOLTIPLICAZIONE CON ASSEGNAZIONE
    eta /= 5; // DIVISIONE CON ASSEGNAZIONE
    eta %= 5; // RESTO CON ASSEGNAZIONE

  
    // ++eta; // INCREMENTO
    // --eta; // DECREMENTO

    std::cout << 5 + 5 << std::endl; // SOMMA
    std::cout << 5 - 5 << std::endl; // DIFFERENZA
    std::cout << 5 * 5 << std::endl; // MOLTIPLICAZIONE
    std::cout << 5 / 5 << std::endl; // DIVISIONE
    std::cout << 5 % 5 << std::endl; // RESTO
   
    // std::cout << z << std::endl;
    std::cout << eta << std::endl;


    return 0; 
}