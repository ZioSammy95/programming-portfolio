#include <iostream>
using namespace std;

class Persona {
public:
    string nome;
    int eta;

    void saluta() {
        cout << "Ciao, mi chiamo " << nome << " e ho " << eta << " anni." << endl;
    }
};

int main() {
    Persona p1;
    p1.nome = "Samuele";
    p1.eta = 30;
    p1.saluta();
    return 0;
}
