#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo";
    string sottostringa = "Ciao";

    if (testo.find(sottostringa) == 0) {
        cout << "La stringa inizia con la sottostringa" << endl;
    } else {
        cout << "La stringa non inizia con la sottostringa" << endl;
    }

    return 0;
}