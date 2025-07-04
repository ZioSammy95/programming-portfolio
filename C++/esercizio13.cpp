#include <iostream>

namespace MyNamespace {
    void saluta() {
        std::cout << "Ciao dal namespace!" << std::endl;
    }
}

namespace MN = MyNamespace;

int main() {
    MN::saluta();
    return 0;
}