#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("input.txt", ios::trunc);
    if (file.is_open()) {
        file.close();
        cout << "Contenuto del file cancellato!" << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}
