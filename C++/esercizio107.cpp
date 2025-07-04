#include <iostream>
using namespace std;

int main() {
    int numeroElementi;
    cout << "Inserisci il numero di elementi della sequenza di Fibonacci da stampare: ";
    cin >> numeroElementi;

    int primoElemento = 0;
    int secondoElemento = 1;

    cout << primoElemento << " " << secondoElemento << " ";

    int i = 3;

    while (i <= numeroElementi) {
        int nuovoElemento = primoElemento + secondoElemento;
        cout << nuovoElemento << " ";

        primoElemento = secondoElemento;
        secondoElemento = nuovoElemento;

        i++;
    }

    return 0;
}
