#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "ciao mondo";
    char letteraDaSostituire = 'o';
    char letteraDiSostituzione = 'a';

    for (int i = 0; i < testo.length(); i++) {
        if (testo[i] == letteraDaSostituire) {
            testo[i] = letteraDiSostituzione;
        }
    }

    cout << "La stringa risultante è: " << testo << endl;

    return 0;
}
