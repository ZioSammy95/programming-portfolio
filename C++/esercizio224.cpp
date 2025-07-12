#include <iostream>
#include <string>

// Classe base Animale
class Animale {
protected:
    std::string nome; // membro protetto

public:
    void impostaNome(const std::string& nuovoNome) {
        nome = nuovoNome;
    }

    std::string getNome() const {
        return nome;
    }
};

// Classe derivata Cane
class Cane : public Animale {
private:
    std::string razza; // membro privato

public:
    void impostaRazza(const std::string& nuovaRazza) {
        razza = nuovaRazza;
    }

    void stampaDettagli() const {
        std::cout << "Nome: " << nome << ", Razza: " << razza << std::endl;
    }
};

// Esempio d'uso
int main() {
    Cane mioCane;
    mioCane.impostaNome("Fido");
    mioCane.impostaRazza("Labrador");
    mioCane.stampaDettagli();

    return 0;
}
