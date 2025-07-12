#include <iostream>
#include <cmath> // per M_PI

// Classe base Figura
class Figura {
protected:
    std::string colore; // membro protetto

public:
    void impostaColore(const std::string& nuovoColore) {
        colore = nuovoColore;
    }

    std::string getColore() const {
        return colore;
    }
};

// Classe derivata Cerchio
class Cerchio : public Figura {
private:
    double raggio; // membro privato

public:
    Cerchio(double r) : raggio(r) {}

    double calcolaArea() const {
        return M_PI * raggio * raggio;
    }

    void stampaInformazioni() const {
        std::cout << "Colore: " << colore << ", Raggio: " << raggio
                  << ", Area: " << calcolaArea() << std::endl;
    }
};

// Esempio d'uso
int main() {
    Cerchio c(5.0); // crea un cerchio di raggio 5
    c.impostaColore("Rosso");
    c.stampaInformazioni();

    return 0;
}
