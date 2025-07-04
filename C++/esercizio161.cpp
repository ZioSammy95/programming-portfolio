#include <iostream>

void raddoppia(int& x) {
    x *= 2;
}

int main() {
    int x = 5;
    raddoppia(x);
    std::cout << x << std::endl;  // Output: 10
    return 0;
}
