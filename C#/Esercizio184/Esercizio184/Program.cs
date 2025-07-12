using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Stack<string> pila = new Stack<string>();

        // Inserimento (PUSH)
        pila.Push("Libro");
        pila.Push("Quaderno");
        pila.Push("Penna");

        // Rimozione (POP)
        string elementoRimosso = pila.Pop();
        Console.WriteLine($"Elemento rimosso: {elementoRimosso}");  // Penna

        // Lettura senza rimuovere (PEEK)
        Console.WriteLine($"Elemento in cima: {pila.Peek()}");  // Quaderno

        // Iterazione
        Console.WriteLine("Contenuto della pila:");
        foreach (string item in pila)
        {
            Console.WriteLine(item);
        }
    }
}
