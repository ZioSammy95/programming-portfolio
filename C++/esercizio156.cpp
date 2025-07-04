#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* puntatore;
    char stringa[] = "Hello";
    puntatore = stringa;

    int lunghezza = strlen(puntatore);

    cout << "Lunghezza della stringa: " << lunghezza << endl;

    return 0;
}
