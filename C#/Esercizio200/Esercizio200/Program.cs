using System;
using Esercizio200;
class Program
{
    static void Main()
    {
        int x = 10;
        int y = 5;

        Console.WriteLine($"Somma: {Calcolatrice.Somma(x, y)}");
        Console.WriteLine($"Sottrazione: {Calcolatrice.Sottrai(x, y)}");
        Console.WriteLine($"Moltiplicazione: {Calcolatrice.Moltiplica(x, y)}");
        Console.WriteLine($"Divisione: {Calcolatrice.Dividi(x, y)}");

        // Divisione per zero
        Console.WriteLine($"Divisione per zero: {Calcolatrice.Dividi(x, 0)}");
    }
}