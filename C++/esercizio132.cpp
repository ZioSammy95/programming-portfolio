#include <iostream>
using namespace std;

void stampaNumeriPari(int n) {
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
}

int main() {
    int num = 10;

    cout << "Numeri pari fino a " << num << ": ";
    stampaNumeriPari(num);
    cout << endl;

    return 0;
}
