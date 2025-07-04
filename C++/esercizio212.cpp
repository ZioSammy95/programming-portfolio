#include <iostream>
using namespace std;

class Veicolo {
private:
    int numeroRuote = 4;

public:
    void stampaNumeroRuote() {
        cout << "Il veicolo ha " << numeroRuote << " ruote." << endl;
    }
};

int main() {
    Veicolo v;
    v.stampaNumeroRuote();

    return 0;
}