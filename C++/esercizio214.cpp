#include <iostream>
using namespace std;

class Cane {
private:
    int eta = 5;

public:
    void stampaEta() {
        cout << "Il cane ha " << eta << " anni." << endl;
    }
};

int main() {
    Cane c;
    c.stampaEta();

    return 0;
}