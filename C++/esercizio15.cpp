#include <iostream>

namespace MyNamespace {
    void saluta() {
        std::cout << "Ciao dal namespace!" << std::endl;
    }
}

using namespace MyNamespace;

int main() {
    saluta();
    return 0;
}