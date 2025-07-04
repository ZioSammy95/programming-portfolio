using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Queue<string> coda = new Queue<string>();

        // Inserimento (ENQUEUE)
        coda.Enqueue("Cliente 1");
        coda.Enqueue("Cliente 2");
        coda.Enqueue("Cliente 3");

        // Visualizzare il primo (PEEK)
        Console.WriteLine($"Prossimo: {coda.Peek()}");  // Cliente 1

        // Rimozione (DEQUEUE)
        Console.WriteLine($"Servito: {coda.Dequeue()}");  // Cliente 1

        // Iterazione
        Console.WriteLine("Clienti in attesa:");
        foreach (string cliente in coda)
        {
            Console.WriteLine(cliente);
        }
    }
}
