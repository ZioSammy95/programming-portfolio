#include <iostream>

// Interfaccia Veicolo (in C++ è una classe astratta con solo metodi virtuali puri)
class Veicolo {
public:
    // Metodo virtuale puro
    virtual void accelera() const = 0;

    // Distruttore virtuale
    virtual ~Veicolo() {}
};

// Classe Automobile che implementa Veicolo
class Automobile : public Veicolo {
public:
    void accelera() const override {
        std::cout << "L'automobile accelera: Vroooom!" << std::endl;
    }
};

// Classe Moto che implementa Veicolo
class Moto : public Veicolo {
public:
    void accelera() const override {
        std::cout << "La moto accelera: Vreeeeem!" << std::endl;
    }
};

// Funzione principale per test
int main() {
    Veicolo* v1 = new Automobile();
    Veicolo* v2 = new Moto();

    v1->accelera();  // Output: L'automobile accelera: Vroooom!
    v2->accelera();  // Output: La moto accelera: Vreeeeem!

    delete v1;
    delete v2;

    return 0;
}
