#include <iostream>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using namespace std;

int divide(int a, int b)
{
    if (b == 0) {
        throw runtime_error("Errore: non divisibile per 0 ");
    }
    return a / b;
}

int main() 
{
    try {                            // PROBABILE ERRORE O ECCEZIONE
        int result = divide(10, 0);
        cout << result << endl; 
    } 
    catch (const exception &e)       // GESTIONE ERRORE 
    {
        cerr << e.what() << '\n';
    }

    cout << "ciao" << endl;


    return 0; 


} 