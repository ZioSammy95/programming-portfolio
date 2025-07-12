#include <iostream>

namespace Geometry {
    class Punto {
    private:
        int x, y;
    public:
        Punto(int x, int y) : x(x), y(y) {}
        void stampa() const {
            std::cout << "Punto(" << x << ", " << y << ")" << std::endl;
        }
    };
}

int main() {
    Geometry::Punto p(1, 2);
    p.stampa();
    return 0;
}