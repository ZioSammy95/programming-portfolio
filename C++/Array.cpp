#include <iostream>
#include <string>
#include "Funzioni.hpp"

using std::string;

int main()
{
   // int voti_storia[5] = {10, 20, 1, 2, 3};
    
    string celle[2][4] = { // ARRAY MULTIDIMENSIONALI
        {"A1", "B1", "C1", "D1"}, 
        {"A2", "B2", "C2", "D2"}
    };

    for(int riga = 0 ; riga < 2 ; riga++){
        for (int colonna = 0 ; colonna < 4 ; colonna++){
            std::cout << celle [riga][colonna] << std::endl;
        }
    }


//for(int i = 0 ; i < sizeof(voti_storia) / sizeof(int) ; i++)
//{
// std::cout << voti_storia[i] << std::endl;

//} // FOR

//for(int voto : voti_storia)
 // {
 // std::cout << voto << std::endl;

// } // FOREACH

// std::cout << sizeof(voti_storia) << std::endl; // LUNGHEZZA ARRAY

   

    return 0;
}