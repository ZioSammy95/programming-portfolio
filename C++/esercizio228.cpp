#include <iostream>
#include <string>

// Classe astratta StrumentoMusicale
class StrumentoMusicale {
public:
    // Metodo virtuale puro
    virtual void eseguiSuono() const = 0;

    // Virtual destructor
    virtual ~StrumentoMusicale() {}
};

// Classe derivata Chitarra
class Chitarra : public StrumentoMusicale {
public:
    void eseguiSuono() const override {
        std::cout << "La chitarra suona: Strum strum!" << std::endl;
    }
};

// Classe derivata Pianoforte
class Pianoforte : public StrumentoMusicale {
public:
    void eseguiSuono() const override {
        std::cout << "Il pianoforte suona: Plin plon!" << std::endl;
    }
};

// Funzione principale per test
int main() {
    StrumentoMusicale* s1 = new Chitarra();
    StrumentoMusicale* s2 = new Pianoforte();

    s1->eseguiSuono();  // Output: La chitarra suona: Strum strum!
    s2->eseguiSuono();  // Output: Il pianoforte suona: Plin plon!

    delete s1;
    delete s2;

    return 0;
}
