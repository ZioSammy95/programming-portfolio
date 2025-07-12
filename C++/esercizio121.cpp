#include <iostream>
using namespace std;

int main() {
    int numero;

    while (true) {
        cout << "Inserisci un numero positivo (negativo per uscire): ";
        cin >> numero;

        if (numero < 0) {
            break;  // esce dal ciclo
        }

        cout << "Hai inserito: " << numero << endl;
    }

    cout << "Loop interrotto con break." << endl;
    return 0;
}
