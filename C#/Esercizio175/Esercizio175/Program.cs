using System;
using System.Collections;

class Program
{
    static void Main()
    {
        ArrayList numeri = new ArrayList();

        // Inserimento dei numeri
        for (int i = 0; i < 5; i++)
        {
            Console.Write($"Inserisci il numero {i + 1}: ");
            int numero = int.Parse(Console.ReadLine());
            numeri.Add(numero);
        }

        // Stampa dei numeri
        Console.WriteLine("\nNumeri inseriti:");
        foreach (var item in numeri)
        {
            Console.Write(item + " ");
        }
        Console.WriteLine();

        // Calcolo della somma
        int somma = 0;
        foreach (var item in numeri)
        {
            somma += (int)item; // Cast necessario
        }

        Console.WriteLine($"\nSomma totale: {somma}");
    }
}
