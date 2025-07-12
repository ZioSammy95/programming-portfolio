using System;
using Esercizio197;
class Program
{
    static void Main()
    {
        Persona p = new Persona();

        Console.Write("Inserisci il nome: ");
        p.Nome = Console.ReadLine();

        Console.Write("Inserisci l'età: ");
        int etaInput;
        if (int.TryParse(Console.ReadLine(), out etaInput))
        {
            p.Eta = etaInput;
        }
        else
        {
            Console.WriteLine("Età non valida.");
        }

        Console.WriteLine("\nInformazioni inserite:");
        p.StampaInformazioni();
    }
}