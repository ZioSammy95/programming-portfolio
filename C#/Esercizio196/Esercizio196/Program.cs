using System;

public class Videogioco
{
    public string Nome;
    public string Genere;
    public double Prezzo;

    // Costruttore senza parametri
    public Videogioco() : this("Videogioco sconosciuto", "Genere sconosciuto", 0.0)
    {
    }

    // Costruttore con 2 parametri
    public Videogioco(string nome, string genere) : this(nome, genere, 0.0)
    {
    }

    // Costruttore con 3 parametri
    public Videogioco(string nome, string genere, double prezzo)
    {
        Nome = nome;
        Genere = genere;
        Prezzo = prezzo;
    }

    // Metodo per stampare le informazioni del videogioco
    public void StampaInfo()
    {
        Console.WriteLine($"Nome: {Nome}");
        Console.WriteLine($"Genere: {Genere}");
        Console.WriteLine($"Prezzo: {Prezzo} €");
        Console.WriteLine("-------------------------");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Uso del costruttore senza parametri
        Videogioco gioco1 = new Videogioco();
        gioco1.StampaInfo();

        // Uso del costruttore con 2 parametri
        Videogioco gioco2 = new Videogioco("The Witcher 3", "RPG");
        gioco2.StampaInfo();

        // Uso del costruttore con 3 parametri
        Videogioco gioco3 = new Videogioco("The Last of Us", "SurvivalHorror", 79.99);
        gioco3.StampaInfo();
    }
}
