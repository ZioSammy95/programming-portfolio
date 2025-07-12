#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cateto1 = 3.0;
    float cateto2 = 4.0;

    float ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "L'ipotenusa del triangolo rettangolo è: " << ipotenusa << endl;

    return 0;
}
