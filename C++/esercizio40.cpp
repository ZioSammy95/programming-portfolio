#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14159;
    float raggio = 2.0;

    float volume = (4.0 / 3.0) * pi * raggio * raggio * raggio;

    cout << "Il volume della sfera è: " << volume << endl;

    return 0;
}