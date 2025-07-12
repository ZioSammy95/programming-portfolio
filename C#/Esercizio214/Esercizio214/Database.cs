using System;

public class Database
{
    // Campo privato che rappresenta lo stato della connessione
    private bool connessione;

    // Metodo privato per connettere al database
    private void ConnettiDatabase()
    {
        // Simulazione della connessione al database
        connessione = true;
        Console.WriteLine("Connessione al database stabilita.");
    }

    // Metodo pubblico per iniziare la connessione (per test)
    public void AvviaConnessione()
    {
        ConnettiDatabase(); // Chiama il metodo privato
    }
}
