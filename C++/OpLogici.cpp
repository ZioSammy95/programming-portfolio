#include <iostream>
#include <string>

using std::string;

int main()
{
    bool isOnline = true;
    int numero1 = 90;
    int numero2 = 103;
    bool x = 65 < 100;
    bool y = 50 != 50;
    bool condizione = (numero1 % 2 != 0) && (numero1 < 100); // AND
    bool condizione1 = (numero1 % 2 != 0) || (numero1 < 100); // OR
    bool condizione2 = !(numero1 < 100);  // NOT
    bool condizione3 = (numero1 % 2 == 0) && (numero1 < 100);
    

    std::cout << std::boolalpha;
    std::cout << condizione << std::endl;
    std::cout << condizione1 << std::endl;
    std::cout << condizione2 << std::endl;
    std::cout << condizione3 << std::endl;



    return 0;
}