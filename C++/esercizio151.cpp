#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* puntatore = &numero;

    cout << "Valore della variabile: " << *puntatore << endl;

    return 0;
}
