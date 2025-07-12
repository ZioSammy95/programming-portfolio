using System;

public class Libro
{
    public string Titolo;
    public string Autore;
    public int NumeroPagine;

    // Costruttore senza parametri
    public Libro() : this("Titolo sconosciuto", "Autore sconosciuto", 0)
    {
    }

    // Costruttore con 2 parametri
    public Libro(string titolo, string autore) : this(titolo, autore, 0)
    {
    }

    // Costruttore con 3 parametri
    public Libro(string titolo, string autore, int numeroPagine)
    {
        Titolo = titolo;
        Autore = autore;
        NumeroPagine = numeroPagine;
    }

    // Metodo per stampare le informazioni del libro
    public void StampaInfo()
    {
        Console.WriteLine($"Titolo: {Titolo}");
        Console.WriteLine($"Autore: {Autore}");
        Console.WriteLine($"Numero di pagine: {NumeroPagine}");
        Console.WriteLine("-------------------------");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Uso del costruttore senza parametri
        Libro libro1 = new Libro();
        libro1.StampaInfo();

        // Uso del costruttore con 2 parametri
        Libro libro2 = new Libro("Il Signore degli Anelli", "J.R.R. Tolkien");
        libro2.StampaInfo();

        // Uso del costruttore con 3 parametri
        Libro libro3 = new Libro("1984", "George Orwell", 328);
        libro3.StampaInfo();
    }
}
