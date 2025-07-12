#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dati di input
    int eta = 25;
    char iniziale = 'M';
    double peso = 68.5;
    bool isSoleggiato = false;
    string citta = "Roma";
    int numeri[5] = {1, 2, 3, 4, 5};
    const float PI = 3.14159;
    int raggio = 5;
    float areaCerchio = PI * raggio * raggio;

    // Enum per i mesi
    enum MesiAnno {
        Gennaio, Febbraio, Marzo, Aprile, Maggio, Giugno,
        Luglio, Agosto, Settembre, Ottobre, Novembre, Dicembre
    };

    MesiAnno meseCorrente = Maggio;

    // Output dei dati
    cout << "Informazioni personali:\n";
    cout << "Eta: " << eta << endl;
    cout << "Iniziale del nome: " << iniziale << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Citta: " << citta << endl;


    cout << "\nGiornata soleggiata? ";
    cout << (isSoleggiato ? "Si" : "No") << endl;

    cout << "\nNumeri dell'array: ";
    for(int i = 0; i < 5; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    cout << "\nArea del cerchio con raggio " << raggio << ": " << areaCerchio << endl;

    cout << "\nMese corrente: ";
    switch(meseCorrente) {
        case Gennaio: cout << "Gennaio"; break;
        case Febbraio: cout << "Febbraio"; break;
        case Marzo: cout << "Marzo"; break;
        case Aprile: cout << "Aprile"; break;
        case Maggio: cout << "Maggio"; break;
        case Giugno: cout << "Giugno"; break;
        case Luglio: cout << "Luglio"; break;
        case Agosto: cout << "Agosto"; break;
        case Settembre: cout << "Settembre"; break;
        case Ottobre: cout << "Ottobre"; break;
        case Novembre: cout << "Novembre"; break;
        case Dicembre: cout << "Dicembre"; break;
    }

    cout << endl;

    return 0;
}
