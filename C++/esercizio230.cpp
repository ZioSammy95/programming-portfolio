#include <iostream>

// Interfaccia Distribuibile
class Distribuibile {
public:
    // Metodo virtuale puro
    virtual void distribuisci() const = 0;

    // Distruttore virtuale
    virtual ~Distribuibile() {}
};

// Classe Libro che implementa Distribuibile
class Libro : public Distribuibile {
public:
    void distribuisci() const override {
        std::cout << "Il libro viene distribuito nelle librerie fisiche e online." << std::endl;
    }
};

// Classe Film che implementa Distribuibile
class Film : public Distribuibile {
public:
    void distribuisci() const override {
        std::cout << "Il film viene distribuito nei cinema e sulle piattaforme di streaming." << std::endl;
    }
};

// Funzione principale per test
int main() {
    Distribuibile* d1 = new Libro();
    Distribuibile* d2 = new Film();

    d1->distribuisci();  // Output: Il libro viene distribuito nelle librerie fisiche e online.
    d2->distribuisci();  // Output: Il film viene distribuito nei cinema e sulle piattaforme di streaming.

    delete d1;
    delete d2;

    return 0;
}
