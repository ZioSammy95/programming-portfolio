#include <iostream>
using namespace std;

struct Film {
    string titolo;
    string regista;
    int anno;
};

int main() {
    Film film;

    cout << "Inserisci il titolo del film: ";
    getline(cin, film.titolo);

    cout << "Inserisci il nome del regista: ";
    getline(cin, film.regista);

    cout << "Inserisci l'anno di uscita del film: ";
    cin >> film.anno;

    cin.ignore();

    cout << endl;
    cout << "Dati del film:" << endl;
    cout << "Titolo: " << film.titolo << endl;
    cout << "Regista: " << film.regista << endl;
    cout << "Anno: " << film.anno << endl;

    return 0;
}
