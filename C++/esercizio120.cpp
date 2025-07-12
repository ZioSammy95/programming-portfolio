#include <iostream>
using namespace std;

int main() {
    int righe, colonne;
    int numero = 1;

    cout << "Inserisci il numero di righe: ";
    cin >> righe;

    cout << "Inserisci il numero di colonne: ";
    cin >> colonne;

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << numero << "\t";
            numero++;
        }
        cout << endl;
    }

    return 0;
}
