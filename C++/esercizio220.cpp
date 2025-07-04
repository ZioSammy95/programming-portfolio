#include <iostream>
using namespace std;

class Cerchio {
private:
    double raggio;
    const double piGreco = 3.14159;

public:
    double calcolaCirconferenza() {
        return 2 * piGreco * raggio;
    }
};

int main() {
    Cerchio c;
    cout << "La circonferenza del cerchio è " << c.calcolaCirconferenza() << " metri." << endl;

    return 0;
}
