#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int fattoriale = 1;

    for (int i = 1; i <= numero; i++) {
        fattoriale *= i;
    }

    cout << "Il fattoriale di " << numero << " è: " << fattoriale << endl;

    return 0;
}