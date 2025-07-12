#include <iostream>
#include <string>
using namespace std;

int main() {
    string parola;

    cout << "Inserisci una parola: ";
    cin >> parola;

    cout << "La lunghezza della parola inserita è: " << parola.length() << endl;

    return 0;
}