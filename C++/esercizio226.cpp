#include <iostream>
#include <cmath> // Per M_PI

// Classe astratta Figura
class Figura {
public:
    // Metodo virtuale puro
    virtual double calcolaArea() const = 0;

    // Virtual destructor
    virtual ~Figura() {}
};

// Classe derivata Quadrato
class Quadrato : public Figura {
private:
    double lato;

public:
    Quadrato(double l) : lato(l) {}

    double calcolaArea() const override {
        return lato * lato;
    }
};

// Classe derivata Cerchio
class Cerchio : public Figura {
private:
    double raggio;

public:
    Cerchio(double r) : raggio(r) {}

    double calcolaArea() const override {
        return M_PI * raggio * raggio;
    }
};

// Funzione principale per test
int main() {
    Figura* f1 = new Quadrato(4.0);
    Figura* f2 = new Cerchio(3.0);

    std::cout << "Area del quadrato: " << f1->calcolaArea() << std::endl;
    std::cout << "Area del cerchio: " << f2->calcolaArea() << std::endl;

    delete f1;
    delete f2;

    return 0;
}
