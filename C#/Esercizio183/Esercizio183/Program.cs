using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Dictionary<string, string> rubrica = new Dictionary<string, string>();

        // Aggiunta contatti
        rubrica["Anna"] = "3451234567";
        rubrica["Marco"] = "3929876543";
        rubrica["Luca"] = "3201122334";

        // Ricerca di un contatto
        Console.Write("Inserisci il nome da cercare: ");
        string nome = Console.ReadLine();

        if (rubrica.TryGetValue(nome, out string numero))
        {
            Console.WriteLine($"Il numero di {nome} è {numero}");
        }
        else
        {
            Console.WriteLine("Contatto non trovato.");
        }

        // Mostra tutti i contatti
        Console.WriteLine("\nRubrica completa:");
        foreach (var contatto in rubrica)
        {
            Console.WriteLine($"{contatto.Key}: {contatto.Value}");
        }
    }
}
