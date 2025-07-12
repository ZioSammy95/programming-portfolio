#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"


using std::string;
using std::vector;

void prova(vector<int> vettore){
for(int numero : vettore)
{
    std::cout << numero << std::endl;

}
}
int main()
{
    vector<int> numeri = {10, 20, 30, 40};
    //numeri.erase(numeri.begin()+ 1)
    // numeri.insert(numeri.begin()+ 1);
   // numeri[0] = 100;
   // numeri.clear();
   // numeri.pop_back(); // TOLGO 40
   // numeri.push_back(50); // AGGIUNGO 50

//for (int i = 0; i < numeri.size() ; i++)
//{
 //   std::cout << numeri [i] << std::endl;
//} //

prova(numeri);
return 0;
}