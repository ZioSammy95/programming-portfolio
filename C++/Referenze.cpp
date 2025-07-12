#include <iostream>
#include <string>
#include "Funzioni.hpp"

using std::string;

int &comparazione(int& x, int& y)
{
    return (x > y) ?  x : y;
}

int main()
{
    int a = 5;
    int b = 50;

    int &maggiore = comparazione(a, b);

    std::cout << maggiore << std::endl;

    maggiore = 100;

    std::cout << maggiore << std::endl;
    std::cout << b << std::endl;

  
    return 0;
}