#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero1 = "15";           // Variabile stringa
    int numero2 = std::stoi(numero1); // Conversione della stringa in intero
    cout << numero2 << endl;         // Stampa del valore di numero2
    return 0;
}

