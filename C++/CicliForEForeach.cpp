#include <iostream>
#include <string>
#include <vector>

using std::string;

int main()
{
    std::setlocale(LC_ALL, "it_IT.utf8");

   // string cognome = "Virgillito";
    std::vector<int> numbers = {10, 20, 30, 40, 50};
   
    for(int i = 0; i < numbers.size(); i++)
    {
        std::cout << "FOR il carattere è: "  << numbers[i] << std::endl; 

    }
    
    
    //for (int i = 0; i <= 5; i++)
    //{
    //    std::cout << "iterazione numero: "  << i << std::endl; 
    //}

   // string nome = "Samuele";

    for(int numero : numbers)
    {
      std::cout << "FOREACH il carattere è: "  << numero << std::endl; 

    }


    return 0 ;

}