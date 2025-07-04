#include <iostream>
#include <string>

// Classe base Persona
class Persona {
protected:
    std::string nome;
    std::string cognome;

public:
    void impostaNome(const std::string& nuovoNome) {
        nome = nuovoNome;
    }

    void impostaCognome(const std::string& nuovoCognome) {
        cognome = nuovoCognome;
    }

    std::string getNomeCompleto() const {
        return nome + " " + cognome;
    }
};

// Classe derivata Studente
class Studente : public Persona {
private:
    std::string matricola;

public:
    void impostaMatricola(const std::string& nuovaMatricola) {
        matricola = nuovaMatricola;
    }

    void stampaDettagli() const {
        std::cout << "Nome: " << nome
                  << ", Cognome: " << cognome
                  << ", Matricola: " << matricola << std::endl;
    }
};

// Esempio d'uso
int main() {
    Studente stud;
    stud.impostaNome("Samuele");
    stud.impostaCognome("Virgillito");
    stud.impostaMatricola("123456");
    stud.stampaDettagli();

    return 0;
}
