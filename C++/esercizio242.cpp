#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (file) {
        cout << "Il file esiste." << endl;
    } else {
        cout << "Il file non esiste." << endl;
    }

    return 0;
}
