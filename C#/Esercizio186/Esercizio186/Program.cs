using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Console.Write("Inserisci una parola: ");
        string parola = Console.ReadLine();

        Stack<char> pila = new Stack<char>();

        // Inseriamo ogni carattere nello stack
        foreach (char c in parola)
        {
            pila.Push(c);
        }

        // Ricostruiamo la parola invertita
        string parolaInvertita = "";
        while (pila.Count > 0)
        {
            parolaInvertita += pila.Pop();
        }

        Console.WriteLine($"Parola invertita: {parolaInvertita}");
    }
}
