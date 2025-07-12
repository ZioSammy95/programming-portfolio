#include <iostream>
using namespace std;

struct Rect {
    double larghezza;
    double altezza;
};

double calcolaArea(Rect rettangolo) {
    return rettangolo.larghezza * rettangolo.altezza;
}

int main() {
    Rect rettangolo;
    rettangolo.larghezza = 5.4;
    rettangolo.altezza = 3.2;

    double area = calcolaArea(rettangolo);

    cout << "Area del rettangolo: " << area << endl;

    return 0;
}
