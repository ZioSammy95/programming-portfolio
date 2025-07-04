#include <iostream>
#include <string>

// Classe astratta Animale
class Animale {
public:
    // Metodo virtuale puro
    virtual void emettiSuono() const = 0;

    // Virtual destructor
    virtual ~Animale() {}
};

// Classe derivata Cane
class Cane : public Animale {
public:
    void emettiSuono() const override {
        std::cout << "Il cane abbaia: Bau Bau!" << std::endl;
    }
};

// Classe derivata Gatto
class Gatto : public Animale {
public:
    void emettiSuono() const override {
        std::cout << "Il gatto miagola: Miao Miao!" << std::endl;
    }
};

// Funzione principale per test
int main() {
    Animale* a1 = new Cane();
    Animale* a2 = new Gatto();

    a1->emettiSuono();  // Output: Il cane abbaia: Bau Bau!
    a2->emettiSuono();  // Output: Il gatto miagola: Miao Miao!

    delete a1;
    delete a2;

    return 0;
}
