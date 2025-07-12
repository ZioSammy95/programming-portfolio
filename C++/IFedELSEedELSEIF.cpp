#include <iostream>
#include <string>

using std::string;

int main()
{
    std::setlocale(LC_ALL, "it_IT.utf8");
    int numero1 = 90;
    int numero2 = 104;

    if(numero1 < 100)
{
    std::cout << "numero1 è minore di 100" << std::endl;
    if(numero1 % 2 == 0)
    {
        std::cout << "numero1 è pari" << std::endl;
    }
    else
    {
        std::cout << "numero1 è dispari" << std::endl;
    }

}
else if (numero1 % 2 != 0){

    std::cout << "numero1 è dispari" << std::endl;

}
else{

    std::cout << "numero1 è maggiore di 200 perciò non mi interessa" <<std::endl;

}

return 0;
}