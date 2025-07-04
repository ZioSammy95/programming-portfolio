#include <iostream>

int main() {
    // Definizione della lambda
    auto moltiplica = [](int a, int b) {
        return a * b;
    };

    // Uso della lambda
    int risultato = moltiplica(4, 5);

    std::cout << "4 * 5 = " << risultato << std::endl;

    return 0;
}
