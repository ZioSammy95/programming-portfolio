#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo";
    string sottostringa = "mon";

    if (testo.find(sottostringa) != string::npos) {
        cout << "La stringa contiene la sottostringa" << endl;
    } else {
        cout << "La stringa non contiene la sottostringa" << endl;
    }

    return 0;
}