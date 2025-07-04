#include <iostream>

int main() {
    auto isPari = [](int n) {
        return n % 2 == 0;
    };

    std::cout << "4 è pari? " << (isPari(4) ? "Sì" : "No") << std::endl;
    std::cout << "7 è pari? " << (isPari(7) ? "Sì" : "No") << std::endl;
}
