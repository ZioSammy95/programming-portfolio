#include <iostream>
using namespace std;

int main() {
    char lettera;
    cout << "Inserisci una lettera: ";
    cin >> lettera;

    switch (lettera) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "La lettera inserita è una vocale." << endl;
            break;
        default:
            cout << "La lettera inserita è una consonante." << endl;
            break;
    }

    return 0;
}
