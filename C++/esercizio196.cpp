#include <iostream>
#include <string>
using namespace std;

class Macchina {
private:
    string marca;
    string modello;
    int annoProduzione;

public:
    void setMarca(string newMarca) {
        marca = newMarca;
    }

    void setModello(string newModello) {
        modello = newModello;
    }

    void setAnnoProduzione(int newAnnoProduzione) {
        annoProduzione = newAnnoProduzione;
    }

    string getMarca() {
        return marca;
    }

    string getModello() {
        return modello;
    }

    int getAnnoProduzione() {
        return annoProduzione;
    }
};

int main() {
    Macchina macchina;
    macchina.setMarca("Audi");
    macchina.setModello("A1");
    macchina.setAnnoProduzione(2025);

    cout << "Marca della macchina: " << macchina.getMarca() << endl;
    cout << "Modello della macchina: " << macchina.getModello() << endl;
    cout << "Anno di produzione: " << macchina.getAnnoProduzione() << endl;

    return 0;
}
