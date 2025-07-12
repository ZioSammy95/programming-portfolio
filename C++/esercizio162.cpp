#include <iostream>

void somma(int& x, int& y) {
    x += y;  // Aggiunge y a x
}

int main() {
    int x = 5;
    int y = 3;
    somma(x, y);
    std::cout << "x: " << x << std::endl;  // Output: x: 8
    std::cout << "y: " << y << std::endl;  // Output: y: 3 (invariato)
    return 0;
}
