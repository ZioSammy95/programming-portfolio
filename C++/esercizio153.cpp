#include <iostream>
using namespace std;

int main() {
    float array[] = {2.5, 3.7, 1.2, 5.9, 4.3};
    float* puntatore = array;
    float somma = 0;

    for (int i = 0; i < 5; i++) {
        somma += *(puntatore + i);
    }

    cout << "Somma degli elementi dell'array: " << somma << endl;

    return 0;
}
