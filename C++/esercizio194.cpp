#include <iostream>
#include <string>
using namespace std;

class Studente {
private:
    string nome;
    int numeroMatricola;
    int annoIscrizione;

public:
    void setNome(string newNome) {
        nome = newNome;
    }

    void setNumeroMatricola(int newNumeroMatricola) {
        numeroMatricola = newNumeroMatricola;
    }

    void setAnnoIscrizione(int newAnnoIscrizione) {
        annoIscrizione = newAnnoIscrizione;
    }

    string getNome() {
        return nome;
    }

    int getNumeroMatricola() {
        return numeroMatricola;
    }

    int getAnnoIscrizione() {
        return annoIscrizione;
    }
};

int main() {
    Studente studente;
    studente.setNome("Samuele Virgillito");
    studente.setNumeroMatricola(12345);
    studente.setAnnoIscrizione(2025);

    cout << "Nome dello studente: " << studente.getNome() << endl;
    cout << "Numero di matricola: " << studente.getNumeroMatricola() << endl;
    cout << "Anno di iscrizione: " << studente.getAnnoIscrizione() << endl;

    return 0;
}
