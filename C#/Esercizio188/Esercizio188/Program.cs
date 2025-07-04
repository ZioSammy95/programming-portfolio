using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Queue<string> sportello = new Queue<string>();

        sportello.Enqueue("Alice");
        sportello.Enqueue("Bob");
        sportello.Enqueue("Chiara");

        while (sportello.Count > 0)
        {
            string cliente = sportello.Dequeue();
            Console.WriteLine($"Servendo: {cliente}");
        }

        Console.WriteLine("Tutti i clienti sono stati serviti.");
    }
}
