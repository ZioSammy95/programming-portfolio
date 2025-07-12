#include <iostream>
#include <string>

using std::string;

int main()
{
    bool x = true;
    bool y = false;
    bool condizione = 10 == 10; // UGUALE A
    bool condizione1 = 10 != 10; // DIVERSO DA
    bool condizione2 = 10 < 10; // MINORE DI
    bool condizione3 = 10 <= 10; // MINORE O UGUALE A
    bool condizione4 = 10 > 10; // MAGGIORE DI
    bool condizione5 = 10 >= 10; // MAGGIORE O UGUALE A
    bool condizione6 = 5 % 2 == 0; // PARI O DISPARI

    std::cout << std::boolalpha;
    std::cout << condizione << std::endl;
    std::cout << condizione1 << std::endl;
    std::cout << condizione2 << std::endl;
    std::cout << condizione3 << std::endl;
    std::cout << condizione4 << std::endl;
    std::cout << condizione5 << std::endl;
    std::cout << condizione6 << std::endl;

    return 0;
}