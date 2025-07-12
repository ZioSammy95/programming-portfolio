#include <iostream>
using namespace std;

struct Persona {
    string nome;
    int eta;
};

int main() {
    Persona persona1;
    persona1.nome = "Samuele";
    persona1.eta = 30;

    cout << "Nome: " << persona1.nome << endl;
    cout << "Età: " << persona1.eta << endl;

    return 0;
}
