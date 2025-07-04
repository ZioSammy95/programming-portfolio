#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int valoreAssoluto = (numero < 0) ? -numero : numero;
    cout << "Il valore assoluto del numero è " << valoreAssoluto << endl;

    return 0;
}