#include <iostream>
#define PI 3.14159
using namespace std;

class Geometria {
public:
    int area(int lato) {
        return lato * lato;
    }

    int area(int base, int altezza) {
        return base * altezza;
    }

    double area(double raggio) {
        return PI * raggio * raggio;
    }
};

int main() {
    Geometria g;

    cout << "Area quadrato (lato 4): " << g.area(4) << endl;
    cout << "Area rettangolo (4x5): " << g.area(4, 5) << endl;
    cout << "Area cerchio (raggio 3): " << g.area(3.0) << endl;

    return 0;
}
