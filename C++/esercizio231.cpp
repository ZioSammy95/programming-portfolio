#include <iostream>

int main() {
    auto somma = [](int a, int b) {
        return a + b;
    };

    std::cout << "3 + 7 = " << somma(3, 7) << std::endl;  // Output: 10
}
