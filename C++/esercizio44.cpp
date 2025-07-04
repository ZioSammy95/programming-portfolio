#include <iostream>
#include <string>
using namespace std;

int main() {
    string primaStringa = "Ciao";
    string secondaStringa = "Mondo";
    string terzaStringa;

    terzaStringa = primaStringa + " " + secondaStringa;

    cout << "La stringa risultante è: " << terzaStringa << endl;

    return 0;
}
