#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int i = 1;

    do {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
