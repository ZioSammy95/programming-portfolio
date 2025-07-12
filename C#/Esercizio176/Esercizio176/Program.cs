using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Creo una lista di stringhe
        List<string> frutti = new List<string>();

        // Aggiungo elementi
        frutti.Add("Mela");
        frutti.Add("Banana");
        frutti.Add("Ciliegia");

        // Accedo agli elementi
        Console.WriteLine(frutti[0]); // Output: Mela

        // Scorro la lista con un ciclo
        foreach (string frutto in frutti)
        {
            Console.WriteLine(frutto);
        }

        // Rimuovo un elemento
        frutti.Remove("Banana");

        // Numero di elementi nella lista
        Console.WriteLine("Numero di frutti: " + frutti.Count);
    }
}

