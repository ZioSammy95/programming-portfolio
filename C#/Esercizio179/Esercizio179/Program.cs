using System;
using System.Collections;

class Program
{
    static void Main()
    {
        // Creo una Hashtable per città e CAP
        Hashtable città = new Hashtable();

        // Aggiungo le coppie città - CAP
        città.Add("Roma", "00100");
        città.Add("Milano", "20100");
        città.Add("Napoli", "80100");

        // Stampo tutte le città e i rispettivi CAP
        foreach (DictionaryEntry entry in città)
        {
            Console.WriteLine("Città: " + entry.Key + " - CAP: " + entry.Value);
        }
    }
}
