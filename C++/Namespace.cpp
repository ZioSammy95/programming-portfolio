#include <iostream>



using std::cout;
using std::endl;


int main()
{
    int eta; // Dichiarazione variabile
    eta = 29; // Assegnazione valore variabile

    const int PI = 3.14159;
    const int ETA_MASSIMA = 50;  
    
    
    std::cout << "Ciao ho " << eta << " anni " <<std::endl;
    std::cout << "Ho " << eta << " anni da giugno" <<std::endl;
    std::cout << "Anche tu hai " << ETA_MASSIMA << " anni? " <<std::endl;

    eta = 27;

    std::cout << "Ciao ho " << eta << " anni? " <<std::endl;

    return 0;



}