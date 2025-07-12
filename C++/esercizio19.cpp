#include <iostream>

namespace {
    void saluta() {
        std::cout << "Ciao dal namespace anonimo!" << std::endl;
    }
}

int main() {
    saluta();
    return 0;
}