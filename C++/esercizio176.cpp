#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Quanti numeri vuoi inserire? ";
    std::cin >> n;

    std::vector<int> numeri;
    int valore;

    for (int i = 0; i < n; i++) {
        std::cout << "Inserisci numero " << (i+1) << ": ";
        std::cin >> valore;
        numeri.push_back(valore);
    }

    int somma = 0;
    for (int num : numeri) {
        somma += num;
    }

    std::cout << "La somma totale è: " << somma << std::endl;

    return 0;
}
