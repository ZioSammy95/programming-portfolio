#include <iostream>

namespace MyNamespace {
    int valore = 10;
    void stampaValore() {
        std::cout << "Valore: " << valore << std::endl;
    }
}

int main() {
    MyNamespace::stampaValore();
    return 0;
}