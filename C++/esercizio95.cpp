#include <iostream>
using namespace std;

int main() {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;

    string risultato = (eta >= 18) ? "Sei maggiorenne." : "Sei minorenne.";
    cout << risultato << endl;

    return 0;
}
