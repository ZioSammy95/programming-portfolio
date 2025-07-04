#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo";
    string sottostringa = "mondo";

    if (testo.rfind(sottostringa) == testo.length() - sottostringa.length()) {
        cout << "La stringa termina con la sottostringa" << endl;
    } else {
        cout << "La stringa non termina con la sottostringa" << endl;
    }

    return 0;
}
