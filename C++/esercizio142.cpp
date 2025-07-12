#include <iostream>
using namespace std;

class Stampante {
public:
    void stampa(int valore) {
        cout << "Intero: " << valore << endl;
    }

    void stampa(double valore) {
        cout << "Double: " << valore << endl;
    }

    void stampa(string testo) {
        cout << "Stringa: " << testo << endl;
    }
};

int main() {
    Stampante s;

    s.stampa(42);
    s.stampa(3.14);
    s.stampa("Ciao, Samuele!");

    return 0;
}
