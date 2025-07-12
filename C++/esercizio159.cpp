#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int* puntatore = array;

    int i = 0;
    while (i < 5) {
        cout << "Elemento " << i + 1 << ": " << *(puntatore + i) << endl;
        i++;
    }

    return 0;
}
