#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Variabile globale
int variabileGlobale = 90;

// Funzione che somma due numeri
int somma(int x, int y) {
    int risultato = x + y; // Variabile locale alla funzione
    return risultato;
}

int main() {
    // Variabili locali alla funzione main
    int variabileMain = 30;
    int variabileCondizione;
    int variabileEsterna = 105;

    // Blocco interno con una costante e una variabile locale
    {
        const int costanteInterna = 5;
        int variabileInterna = 0;

        // Usiamo entrambe per evitare i warning
        cout << "Costante interna al blocco: " << costanteInterna << endl;
        cout << "Variabile interna al blocco: " << variabileInterna << endl;
    }

    // Blocco if con variabile locale
    if (5 < 10) {
        variabileCondizione = 10;
        cout << "Valore della variabile dentro l'if: " << variabileCondizione << endl;
    }

    // Esempio di chiamata alla funzione somma
    int risultatoSomma = somma(variabileMain, variabileCondizione);
    cout << "Risultato della somma: " << risultatoSomma << endl;

    // Usiamo anche variabileEsterna
    cout << "Variabile esterna dichiarata in main: " << variabileEsterna << endl;

    // Stampa della variabile globale
    cout << "Variabile globale: " << variabileGlobale << endl;

    return 0;
}
