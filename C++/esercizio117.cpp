#include <iostream>
#include <vector>
using namespace std;

int main() {
    int base, esponente;
    cout << "Inserisci la base intera: ";
    cin >> base;
    cout << "Inserisci l'esponente intero (>= 0): ";
    cin >> esponente;

    if (esponente < 0) {
        cout << "Questo programma gestisce solo esponenti positivi o nulli." << endl;
        return 1;
    }

    vector<int> ripetizioni(esponente, 0); // vettore con 'esponente' elementi
    int risultato = 1;

    for (int _ : ripetizioni) {
        risultato *= base;
    }

    cout << base << " elevato a " << esponente << " è: " << risultato << endl;
    return 0;
}
