#include <iostream>
using namespace std;

int main() {
    char stringa[] = "";
    char* puntatore = stringa;

    if (*puntatore == '\0') {
        cout << "La stringa è vuota." << endl;
    } else {
        cout << "La stringa non è vuota." << endl;
    }

    return 0;
}