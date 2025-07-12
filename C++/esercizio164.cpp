#include <iostream>

void modifica(int& a, int& b) {
    int originale = a;       // Salva il valore originale
    a = a * 4;               // Quadruplica a
    b = b - originale * 3;   // Sottrae 3 volte il valore originale da b
}

int main() {
    int a = 3;
    int b = 20;
    modifica(a, b);
    std::cout << "a: " << a << std::endl;  // a: 12
    std::cout << "b: " << b << std::endl;  // b: 11
    return 0;
}
