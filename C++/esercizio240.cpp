#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("input.txt", ios::app);
    if (file.is_open()) {
        file << "Questa è una nuova riga di testo." << endl;
        file.close();
        cout << "Riga aggiunta con successo!" << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}
