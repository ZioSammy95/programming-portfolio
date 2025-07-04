#include <iostream>
using namespace std;

int main() {
    int numero = 8;
    int* puntatore = &numero;

    *puntatore *= 2;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}
