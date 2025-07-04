#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valore = 3.14159;
    float* puntatore = &valore;

    cout << "Valore della variabile: " << fixed << setprecision(2) << *puntatore << endl;

    return 0;
}
