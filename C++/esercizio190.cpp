#include <iostream>
using namespace std;

class Auto {
public:
    string marca;
    string modello;
    int anno;

    void descrivi() {
        cout << "Questa è una " << marca << " " << modello << " del " << anno << "." << endl;
    }
};

int main() {
    Auto miaAuto;
    miaAuto.marca = "Audi";
    miaAuto.modello = "A1";
    miaAuto.anno = 2025;

    miaAuto.descrivi();

    return 0;
}
