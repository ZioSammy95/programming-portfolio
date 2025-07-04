#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Inserisci una stringa: ";
    getline(cin, input); // consente di leggere anche spazi

    int count = 0;
    for (char c : input) {
        c = tolower(c); // rende il confronto case-insensitive
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    cout << "Numero di vocali presenti: " << count << endl;
    return 0;
}
