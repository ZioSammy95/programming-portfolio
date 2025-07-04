#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    string risultato = (numero % 2 == 0) ? "Il numero è pari." : "Il numero è dispari.";
    cout << risultato << endl;

    return 0;
}
