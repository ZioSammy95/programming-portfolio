using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Creo una lista di nomi
        List<string> nomi = new List<string> { "Samuele", "Anna", "Marco", "Luca" };

        // Rimuovo il nome "Luca"
        nomi.Remove("Luca");

        // Stampo la lista aggiornata
        Console.WriteLine("Lista aggiornata dei nomi:");
        foreach (string nome in nomi)
        {
            Console.WriteLine(nome);
        }
    }
}
