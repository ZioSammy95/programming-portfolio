#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <= 100);

    cout << endl;
    return 0;
}