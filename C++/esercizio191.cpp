#include <iostream>
#include <cmath>
using namespace std;

class Punto {
private:
    double x;
    double y;

public:
    void setCoordinate(double newX, double newY) {
        x = newX;
        y = newY;
    }

    double distanzaOrigine() {
        return sqrt(x*x + y*y);
    }
};

int main() {
    Punto punto;
    punto.setCoordinate(3.0, 4.0);
    cout << "Distanza dall'origine: " << punto.distanzaOrigine() << endl;

    return 0;
}
