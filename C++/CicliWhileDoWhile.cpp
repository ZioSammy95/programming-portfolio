#include <iostream>
#include <string>

using std::string;

int main()
{
    std::setlocale(LC_ALL, "it_IT.utf8");
   
    int numeroSegreto = 5;
    int numeroUtente;
    //int tentativi;

    std::cout << "indovina il numero: " ;
    std::cin >> numeroUtente; 
    
    while(numeroUtente != numeroSegreto){
        std::cout << " riprova " <<std::endl;
        std::cin >> numeroUtente;
    }

        std::cout << " hai vinto!" <<std::endl;
    
    do
    {
    std::cout << "indovina il numero: " ;
    std::cin >> numeroUtente;
    if(numeroUtente == numeroSegreto)
    {
        std::cout << " hai vinto!" <<std::endl;
    } 
    else 
    {
        std::cout << " riprova" <<std::endl;
    }
    }while (numeroUtente != numeroSegreto);

    return 0;
}