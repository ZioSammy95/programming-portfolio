#include <iostream>
#include <string>

using std::string;

int main()
{
    // CASTING IMPLICITO
   // int x = 10;
   // float y = x;
   // std::cout << std::fixed << x << std::endl;

    char carattere = 'A';
    int carattereIntero = carattere;
    std::cout << carattereIntero << std::endl;

    // CASTING ESPLICITO
    //int x = 10.05;
    //float y = 3.99;
    //int z = static_cast<int>(y);

    int x = 65;
    float y = 3.99;
    
    
    //std::cout << z << std::endl;
    //std::cout << static_cast<char>(x);
    //std::cout << std:: fixed << std::stoi(x) + 5 << std::endl;
    std::cout << typeid(x).name() <<std::endl;
    return 0;
} 