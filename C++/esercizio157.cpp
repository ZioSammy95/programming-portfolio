#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* puntatore = &numero;

    cout << "Inserisci un nuovo valore: ";
    cin >> *puntatore;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}
