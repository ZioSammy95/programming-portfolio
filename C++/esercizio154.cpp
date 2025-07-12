#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int* puntatore = &numero;

    (*puntatore)++;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}
