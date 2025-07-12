#include <iostream>
#include <string>
using namespace std;

class Convertitore {
public:
    string converti(int numero) {
        return "Numero intero: " + to_string(numero);
    }

    string converti(double numero) {
        return "Numero double: " + to_string(numero);
    }

    string converti(bool valore) {
        if (valore)
            return "Valore booleano: vero";
        else
            return "Valore booleano: falso";
    }
};

int main() {
    Convertitore conv;

    cout << conv.converti(42) << endl;
    cout << conv.converti(3.14) << endl;
    cout << conv.converti(true) << endl;

    return 0;
}
