#include <iostream>
using namespace std;

int main() {
    int N;
    int somma = 0;

    cout << "Inserisci un numero positivo: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        somma += i;
    }

    cout << "La somma dei primi " << N << " numeri è: " << somma << endl;
    return 0;
}
