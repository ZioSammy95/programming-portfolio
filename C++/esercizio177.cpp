#include <iostream>
#include <vector>
#include <limits>

int main() {
    int studenti;
    std::cout << "Numero di studenti: ";
    std::cin >> studenti;

    std::vector<float> voti;
    float voto;

    for (int i = 0; i < studenti; i++) {
        std::cout << "Inserisci voto studente " << (i + 1) << ": ";
        std::cin >> voto;
        voti.push_back(voto);
    }

    float somma = 0;
    float massimo = std::numeric_limits<float>::min();
    float minimo = std::numeric_limits<float>::max();

    for (float v : voti) {
        somma += v;
        if (v > massimo) massimo = v;
        if (v < minimo) minimo = v;
    }

    std::cout << "Media voti: " << (somma / studenti) << std::endl;
    std::cout << "Voto più alto: " << massimo << std::endl;
    std::cout << "Voto più basso: " << minimo << std::endl;

    return 0;
}
