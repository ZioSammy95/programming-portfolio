#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {
        void saluta() {
            std::cout << "Ciao dal namespace interno!" << std::endl;
        }
    }
}

int main() {
    OuterNamespace::InnerNamespace::saluta();
    return 0;
}