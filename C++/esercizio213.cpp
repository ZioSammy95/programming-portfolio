#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nome = "Samuele";

public:
    void stampaNome() {
        cout << "Il nome della persona è " << nome << "." << endl;
    }
};

int main() {
    Persona p;
    p.stampaNome();

    return 0;
}