#include <iostream>
#include <string>

// Classe base Prodotto
class Prodotto {
protected:
    std::string nome;
    double prezzo;

public:
    void impostaNome(const std::string& nuovoNome) {
        nome = nuovoNome;
    }

    void impostaPrezzo(double nuovoPrezzo) {
        prezzo = nuovoPrezzo;
    }

    std::string getNome() const {
        return nome;
    }

    double getPrezzo() const {
        return prezzo;
    }
};

// Classe derivata Libro
class Libro : public Prodotto {
private:
    std::string autore;

public:
    void impostaAutore(const std::string& nuovoAutore) {
        autore = nuovoAutore;
    }

    void stampaDettagli() const {
        std::cout << "Nome: " << nome
                  << ", Prezzo: " << prezzo
                  << ", Autore: " << autore << std::endl;
    }
};

// Esempio d'uso
int main() {
    Libro libro1;
    libro1.impostaNome("Il Signore degli Anelli");
    libro1.impostaPrezzo(24.99);
    libro1.impostaAutore("J.R.R. Tolkien");
    libro1.stampaDettagli();

    return 0;
}
