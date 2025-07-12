#include <iostream>
#include <string>

using std::string;

int main()
{
    std::setlocale(LC_ALL, "it_IT.utf8");

    int numero1 = 300;
    string tipoNumero = (numero1 < 100) ? "minore di 100" : (numero1 >= 100 && numero1 <= 200) ? "compreso" : "superiore a 200";


    std::cout << tipoNumero;



    return 0;
}