using System;
using Esercizio199;
class Program
{
    static void Main()
    {
        Utente u1 = new Utente("Alice");
        Utente u2 = new Utente("Bob");
        Utente u3 = new Utente("Samuele");

        u1.Saluta();
        u2.Saluta();
        u3.Saluta();

        // Metodo statico: non serve un oggetto per chiamarlo
        Utente.MostraTotaleUtenti();
    }
}