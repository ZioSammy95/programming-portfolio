#include <iostream>
using namespace std;

class Calcolatrice {
public:
    int somma(int a, int b) {
        return a + b;
    }

    int somma(int a, int b, int c) {
        return a + b + c;
    }

    double somma(double a, double b) {
        return a + b;
    }
};

int main() {
    Calcolatrice calc;

    cout << "Somma 2 + 3 = " << calc.somma(2, 3) << endl;
    cout << "Somma 1 + 2 + 3 = " << calc.somma(1, 2, 3) << endl;
    cout << "Somma 2.5 + 3.1 = " << calc.somma(2.5, 3.1) << endl;

    return 0;
}
