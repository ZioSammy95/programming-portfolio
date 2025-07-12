using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Creazione di un dictionary con chiave stringa e valore int
        Dictionary<string, int> punteggi = new Dictionary<string, int>();

        // Aggiunta di elementi
        punteggi["Mario"] = 100;
        punteggi["Luigi"] = 85;
        punteggi["Peach"] = 95;

        // Accesso a un valore
        Console.WriteLine(punteggi["Mario"]); // Output: 100

        // Verifica se una chiave esiste
        if (punteggi.ContainsKey("Bowser"))
        {
            Console.WriteLine(punteggi["Bowser"]);
        }
        else
        {
            Console.WriteLine("Bowser non ha un punteggio.");
        }

        // Iterazione
        foreach (KeyValuePair<string, int> coppia in punteggi)
        {
            Console.WriteLine($"{coppia.Key}: {coppia.Value}");
        }
    }
}

