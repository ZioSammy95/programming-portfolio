#include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (rename("source/file.txt", "destination/file.txt") == 0) {
        cout << "File spostato con successo!" << endl;
    } else {
        cout << "Impossibile spostare il file." << endl;
    }

    return 0;
}
