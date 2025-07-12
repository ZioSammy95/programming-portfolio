class Program
{
    static void Main()
    {
        // Test classe Database
        Database db = new Database();
        db.AvviaConnessione();

        // Test classe Utente
        Utente utente = new Utente();
        utente.username = "Samuele";

        Console.WriteLine("Inserisci la password:");
        string input = Console.ReadLine();

        if (utente.ValidaPassword(input))
            Console.WriteLine("Accesso consentito.");
        else
            Console.WriteLine("Accesso negato.");
    }
}