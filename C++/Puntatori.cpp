#include <iostream>
#include <string>
#include "Funzioni.hpp"

using std::string;

void funzione( int *ptr_parametro){
    *ptr_parametro = 50;
}

int main()
{
    int prova = 5;
    int *ptr_prova = &prova; // PUNTATORE O POINTER *ptr
    ptr_prova = &prova;
   
    std::cout << prova << std::endl;
    //std::cout << ptr_prova << std::endl;
    //std::cout << *ptr_prova << std::endl;

   *ptr_prova = 200;

    std::cout << prova << std::endl;
    //std::cout << ptr_prova << std::endl;
    //std::cout << *ptr_prova << std::endl;

    funzione(&prova);
    std::cout << prova << std::endl;
   
    return 0;
}