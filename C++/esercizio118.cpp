#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    vector<int> moltiplicatori = {1,2,3,4,5,6,7,8,9,10};

    cout << "Tabellina del " << numero << ":\n";
    for (int i : moltiplicatori) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
