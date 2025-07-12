#include <iostream>
#include <string>

// Classe base Veicolo
class Veicolo {
protected:
    std::string marca;
    int annoProduzione;

public:
    void impostaMarca(const std::string& nuovaMarca) {
        marca = nuovaMarca;
    }

    void impostaAnnoProduzione(int anno) {
        annoProduzione = anno;
    }

    std::string getMarca() const {
        return marca;
    }

    int getAnnoProduzione() const {
        return annoProduzione;
    }
};

// Classe derivata Automobile
class Automobile : public Veicolo {
private:
    std::string modello;

public:
    void impostaModello(const std::string& nuovoModello) {
        modello = nuovoModello;
    }

    void stampaDettagli() const {
        std::cout << "Marca: " << marca
                  << ", Modello: " << modello
                  << ", Anno di Produzione: " << annoProduzione << std::endl;
    }
};

// Esempio d'uso
int main() {
    Automobile auto1;
    auto1.impostaMarca("Audi");
    auto1.impostaAnnoProduzione(2025);
    auto1.impostaModello("A1");
    auto1.stampaDettagli();

    return 0;
}
