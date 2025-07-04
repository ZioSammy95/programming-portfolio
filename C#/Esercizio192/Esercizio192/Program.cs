using System;

public class Libro
{
    public string Titolo { get; set; }
    public string Autore { get; set; }
    public int AnnoPubblicazione { get; set; }

    public void StampaDettagli()
    {
        Console.WriteLine($"Titolo: {Titolo}");
        Console.WriteLine($"Autore: {Autore}");
        Console.WriteLine($"Anno di Pubblicazione: {AnnoPubblicazione}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Libro libro = new Libro();
        libro.Titolo = "Il Signore degli Anelli";
        libro.Autore = "J.R.R. Tolkien";
        libro.AnnoPubblicazione = 1954;

        libro.StampaDettagli();
    }
}
