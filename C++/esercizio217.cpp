#include <iostream>
#include <string>
using namespace std;

class Impiegato {
private:
    string nome;
    double stipendio = 1500;

public:
    void stampaStipendio() {
        cout << "Lo stipendio dell'impiegato " << nome << " è " << stipendio << " euro." << endl;
    }
};

int main() {
    Impiegato i;
    i.stampaStipendio();

    return 0;
}