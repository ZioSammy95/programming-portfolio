#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using std::string;
using std::vector;


int main()

{
    vector<int> vettore = {1, 2, 3, 4, 5};

    auto f = [](int x)
    { return ( x + 5 - 3) * 10; };
    

    for (int i = 0; i < vettore.size(); i++)
    {
        vettore[i] = f(vettore[i]);
        std::cout << vettore[i] << std::endl;
    }


    return 0;
}