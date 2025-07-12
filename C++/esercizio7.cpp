#include <iostream>
using namespace std;

int main() {
    const int LIMITE = 100;
    int valore = 99;

    if (valore > LIMITE) {
        cout << "Il valore supera il limite." << endl;
    } else {
        cout << "Il valore è entro il limite." << endl;
    }

    return 0;
}