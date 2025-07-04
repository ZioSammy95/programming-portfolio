#include <iostream>

class Esempio {
public:
    Esempio() {
        std::cout << "Costruttore di default chiamato" << std::endl;
    }
};

int main() {
    Esempio e;
    return 0;
}