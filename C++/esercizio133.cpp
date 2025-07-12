#include <iostream>
using namespace std;

bool isVocale(char c) {
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char carattere = 'A';

    if (isVocale(carattere)) {
        cout << carattere << " è una vocale." << endl;
    } else {
        cout << carattere << " non è una vocale." << endl;
    }

    return 0;
}
