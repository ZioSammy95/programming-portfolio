using System;
using System.Collections;

class Program
{
    static void Main()
    {
        // Creo una Hashtable per prodotti e prezzi
        Hashtable prodotti = new Hashtable();

        // Aggiungo prodotti
        prodotti.Add("Pane", 1.50);
        prodotti.Add("Latte", 1.20);
        prodotti.Add("Uova", 2.00);

        // Modifico il prezzo del Latte
        prodotti["Latte"] = 1.30;

        // Rimuovo le Uova
        prodotti.Remove("Uova");

        // Stampo tutti i prodotti rimasti
        foreach (DictionaryEntry entry in prodotti)
        {
            Console.WriteLine("Prodotto: " + entry.Key + " - Prezzo: €" + entry.Value);
        }
    }
}

