#include <iostream>

void funzione(int parametro) {
    std::cout << "Parametro: " << parametro << std::endl;
}

int main() {
    int valore = 42;
    funzione(valore);
    // parametro non è accessibile qui
    return 0;
}