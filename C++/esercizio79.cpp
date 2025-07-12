#include <iostream>
using namespace std;

int main() {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;

    if (eta >= 18) {
        cout << "Sei maggiorenne." << endl;
    } else {
        cout << "Sei minorenne." << endl;
    }

    return 0;
}