#include <iostream>
using namespace std;

class Banca {
private:
    double saldo;

public:
    void stampaSaldo() {
        cout << "Il saldo della banca è " << saldo << " euro." << endl;
    }
};

int main() {
    Banca b;
    b.stampaSaldo();

    return 0;
}
