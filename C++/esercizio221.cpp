#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titolo = "Il paese delle meraviglie";
    string autore = "Samuele Virgillito";

public:
    void stampaInformazioni() {
        cout << "Il libro \"" << titolo << "\" è stato scritto da " << autore << "." << endl;
    }
};

int main() {
    Libro l;
    l.stampaInformazioni();

    return 0;
}
