#include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (remove("file.txt") == 0) {
        cout << "File eliminato con successo!" << endl;
    } else {
        cout << "Impossibile eliminare il file." << endl;
    }

    return 0;
}
