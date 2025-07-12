#include <iostream>

void trasforma(int& x, int& y) {
    int originale = x;
    x = x * 3;
    y = y + originale * 2;
}

int main() {
    int x = 5;
    int y = 10;
    trasforma(x, y);
    std::cout << "x: " << x << std::endl;  // x: 15
    std::cout << "y: " << y << std::endl;  // y: 20
    return 0;
}
