#include <iostream>
using namespace std;

class Persona {
public:
    string nome;
    int eta;

    // Costruttore di default
    Persona() : nome("Sconosciuto"), eta(0) {}

    // Costruttore parametrico
    Persona(string n, int e) : nome(n), eta(e) {}

    // Costruttore di copia
    Persona(const Persona &p) : nome(p.nome), eta(p.eta) {}

    void saluta() {
        cout << "Ciao, sono " << nome << " e ho " << eta << " anni.\n";
    }
};

int main() {
    Persona p1;
    Persona p2("Samuele", 30);
    Persona p3 = p2;

    p1.saluta();
    p2.saluta();
    p3.saluta();

    return 0;
}
