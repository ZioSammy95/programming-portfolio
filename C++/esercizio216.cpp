#include <iostream>
using namespace std;

class Punto {
private:
    double x;
    double y;

public:
    void stampaCoordinate() {
        cout << "Le coordinate del punto sono (" << x << ", " << y << ")." << endl;
    }
};

int main() {
    Punto p;
    p.stampaCoordinate();

    return 0;
}
