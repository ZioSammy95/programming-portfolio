#include <iostream>

void testScope() {
    int x = 10;
    {
        int y = 20;
        std::cout << "Dentro il blocco: x = " << x << ", y = " << y << std::endl;
    }
    // y non è accessibile qui
    std::cout << "Fuori dal blocco: x = " << x << std::endl;
}

int main() {
    testScope();
    return 0;
}