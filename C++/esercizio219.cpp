#include <iostream>
#include <string>
using namespace std;

class Studente {
private:
    string nome;
    int voto = 8;

public:
    void stampaVoto() {
        cout << "Lo studente " << nome << " ha preso il voto " << voto << "." << endl;
    }
};

int main() {
    Studente s;
    s.stampaVoto();

    return 0;
}
