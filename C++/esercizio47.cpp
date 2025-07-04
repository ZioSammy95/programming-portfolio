#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "anna";
    bool palindroma = true;

    for (int i = 0; i < testo.length() / 2; i++) {
        if (testo[i] != testo[testo.length() - 1 - i]) {
            palindroma = false;
            break;
        }
    }

    if (palindroma) {
        cout << "La stringa è palindroma" << endl;
    } else {
        cout << "La stringa non è palindroma" << endl;
    }

    return 0;
}