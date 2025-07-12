#include <iostream>
using namespace std;

int main() {
    int voto;
    cout << "Inserisci il voto: ";
    cin >> voto;

    if (voto >= 0 && voto <= 100) {
        cout << "Il voto è valido." << endl;
    } else {
        cout << "Il voto non è valido." << endl;
    }

    return 0;
}
