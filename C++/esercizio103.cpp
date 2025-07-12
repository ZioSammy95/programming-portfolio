#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Inserisci un anno: ";
    cin >> anno;

    string risultato = (anno >= 1900 && anno <= 2099) ? "L'anno è valido." : "L'anno non è valido.";
    cout << risultato << endl;

    return 0;
}
