#include <iostream>
using namespace std;

int main() {
    double prezzo;
    cout << "Inserisci il prezzo del prodotto: ";
    cin >> prezzo;

    double prezzoScontato;

    switch (static_cast<int>(prezzo)) {
        case 0 ... 10:
            prezzoScontato = prezzo * 0.9;
            break;
        case 11 ... 50:
            prezzoScontato = prezzo * 0.8;
            break;
        case 51 ... 100:
            prezzoScontato = prezzo * 0.7;
            break;
        default:
            prezzoScontato = prezzo * 0.6;
            break;
    }

    cout << "Il prezzo scontato è: " << prezzoScontato << endl;

    return 0;
}
