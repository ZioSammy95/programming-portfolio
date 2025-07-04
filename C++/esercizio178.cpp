#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cout << "Quanti nomi vuoi inserire? ";
    std::cin >> n;

    std::vector<std::string> nomi;
    std::string nome;

    // Inserimento nomi
    for (int i = 0; i < n; i++) {
        std::cout << "Inserisci nome " << (i + 1) << ": ";
        std::cin >> nome;
        nomi.push_back(nome);
    }

    // Ricerca nome
    std::string daCercare;
    std::cout << "Inserisci un nome da cercare: ";
    std::cin >> daCercare;

    bool trovato = false;
    for (std::string n : nomi) {
        if (n == daCercare) {
            trovato = true;
            break;
        }
    }

    if (trovato) {
        std::cout << "Il nome \"" << daCercare << "\" è presente nella lista." << std::endl;
    } else {
        std::cout << "Il nome \"" << daCercare << "\" NON è presente nella lista." << std::endl;
    }

    return 0;
}
