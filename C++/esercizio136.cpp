#include <iostream>
#include <cstring>
using namespace std;

int lunghezzaStringa(char stringa[]) {
    return strlen(stringa);
}

int main() {
    char testo[] = "Ciao Mondo";

    int lunghezza = lunghezzaStringa(testo);

    cout << "La lunghezza della stringa è: " << lunghezza << endl;

    return 0;
}