using System;

// Dichiariamo prima la classe
public class Prodotto
{
    // Proprietà
    public string Nome { get; set; }
    public decimal Prezzo { get; set; }
    public int Quantita { get; set; }

    // Metodo per calcolare il totale
    public decimal CalcolaTotale()
    {
        return Prezzo * Quantita;
    }
}

// Poi il Programma principale
class Program
{
    static void Main(string[] args)
    {
        Prodotto prodotto = new Prodotto();
        prodotto.Nome = "Mouse Wireless";
        prodotto.Prezzo = 25.99m;
        prodotto.Quantita = 3;

        Console.WriteLine($"Prodotto: {prodotto.Nome}");
        Console.WriteLine($"Prezzo unitario: €{prodotto.Prezzo}");
        Console.WriteLine($"Quantità: {prodotto.Quantita}");
        Console.WriteLine($"Totale: €{prodotto.CalcolaTotale()}");
    }
}
