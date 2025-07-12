using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Creo una lista di numeri interi
        List<int> numeri = new List<int>();

        // Aggiungo i numeri da 1 a 5
        numeri.Add(1);
        numeri.Add(2);
        numeri.Add(3);
        numeri.Add(4);
        numeri.Add(5);

        // Stampo il doppio di ogni numero
        foreach (int numero in numeri)
        {
            Console.WriteLine("Doppio di " + numero + " è " + (numero * 2));
        }
    }
}
