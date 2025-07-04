#include <iostream>
#include <string>
using namespace std;

class Giocatore {
private:
    string nome;
    int punteggio;
    int livello;

public:
    void setNome(string newNome) {
        nome = newNome;
    }

    void setPunteggio(int newPunteggio) {
        punteggio = newPunteggio;
    }

    void setLivello(int newLivello) {
        livello = newLivello;
    }

    string getNome() {
        return nome;
    }

    int getPunteggio() {
        return punteggio;
    }

    int getLivello() {
        return livello;
    }
};

int main() {
    Giocatore giocatore;
    giocatore.setNome("Mario");
    giocatore.setPunteggio(100);
    giocatore.setLivello(5);

    cout << "Nome del giocatore: " << giocatore.getNome() << endl;
    cout << "Punteggio del giocatore: " << giocatore.getPunteggio() << endl;
    cout << "Livello raggiunto: " << giocatore.getLivello() << endl;

    return 0;
}
