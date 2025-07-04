#include <iostream>
#include <string>
#include "Funzioni.hpp"

using std::string;

int calcolaSecondiInAnni(int anno = 1);


int main()
{
    int secondiInAnno = calcolaSecondiInAnni();
    int secondiIn2Anni= calcolaSecondiInAnni(2);
    int secondiIn3Anni = calcolaSecondiInAnni(3); // ARGOMENTO

    std::cout << secondiInAnno << std::endl;
    std::cout << secondiIn2Anni << std::endl;
    std::cout << secondiIn3Anni << std::endl;


     
    return 0;

}

int calcolaSecondiInAnni(int anno)  // PARAMETRO
{
    int secondiTotali = 60 * 60 * 24 * 365 * anno;
    return secondiTotali;
}

