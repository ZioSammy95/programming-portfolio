#include <iostream>
#include <iomanip>
using namespace std;

class Orario {
private:
    int ore;
    int minuti;
    int secondi;

public:
    void setOrario(int newOre, int newMinuti, int newSecondi) {
        ore = newOre;
        minuti = newMinuti;
        secondi = newSecondi;
    }

    void visualizzaOrario() {
        cout << setfill('0') << setw(2) << ore << ":" << setw(2) << minuti << ":" << setw(2) << secondi << endl;
    }
};

int main() {
    Orario orario;
    orario.setOrario(9, 30, 45);
    orario.visualizzaOrario();

    return 0;
}
