#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeri;

    // Aggiunta di elementi
    numeri.push_back(10);
    numeri.push_back(20);
    numeri.push_back(30);

    // Accesso agli elementi
    for (int i = 0; i < numeri.size(); i++) {
        std::cout << numeri[i] << " ";
    }

    // Rimuove l'ultimo
    numeri.pop_back();

    std::cout << "\nDopo pop_back: ";
    for (int num : numeri) {
        std::cout << num << " ";
    }

    return 0;
}
