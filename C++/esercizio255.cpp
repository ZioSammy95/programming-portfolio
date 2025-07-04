#include <iostream>
#include <stdexcept>

void lanciaEccezioneGenerica() {
    throw std::runtime_error("Eccezione generica lanciata");
}

int main() {
    try {
        lanciaEccezioneGenerica();
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}