using System;
using System.Collections;

class Program
{
    static void Main()
    {
        // Creo una Hashtable
        Hashtable studenti = new Hashtable();

        // Aggiungo elementi (chiave: valore)
        studenti.Add(1, "Marco");
        studenti.Add(2, "Sara");
        studenti.Add(3, "Luca");

        // Accesso a un valore tramite la chiave
        Console.WriteLine(studenti[1]); // Output: Marco

        // Scorro tutta la Hashtable
        foreach (DictionaryEntry entry in studenti)
        {
            Console.WriteLine("Matricola: " + entry.Key + ", Nome: " + entry.Value);
        }

        // Controllo se una chiave esiste
        if (studenti.ContainsKey(2))
        {
            Console.WriteLine("La matricola 2 è presente.");
        }

        // Rimuovo un elemento
        studenti.Remove(3);
    }
}

