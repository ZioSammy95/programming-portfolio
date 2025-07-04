#include <iostream>
#include "Funzioni.hpp"
using namespace std;

int somma(int a, int b) {
    return a + b;
}


int main() {
    cout << somma(2, 3) <<endl;         // Chiama somma(int, int)
    return 0;
}
