#include <iostream>
using namespace std;

int main() {
    bool valore1 = false;
    bool valore2 = true;

    cout << ((!valore1 || !valore2) ? "Vero" : "Falso") << endl;

    return 0;
}