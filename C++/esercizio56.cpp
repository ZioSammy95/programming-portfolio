#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero1 = 25;                      // Variabile int
    string numero2 = std::to_string(numero1); // Conversione da int a stringa
    cout << numero2 << endl;              // Stampa del valore di numero2
    return 0;
}
