using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

class Program
{
    static void Main(string[] args)
    {
        // Array finiti SI tipo di dati;
        // ArrayList infiniti elementi rimuovere e aggiungere NO tipo di dato coerente;
        // List infiniti elementi rimuovere e aggiungere SI tipo di dato coerente;
        // Generico solo un tipo di dato;
        // Non generico tutti i dati insieme;

        int[] arrayInteri = { 10, 20, 30 };
        List<int> prova = new List<int>() { 1, 2, 3, 4 };
        prova.Add(5);
        prova.AddRange(arrayInteri);
        prova.Insert(0, 55);
        prova[0] = 5000;
        prova.Remove(5000);
        prova.RemoveAt(0);
        prova.RemoveRange(0, 4);

        //prova.Contains(10);

        foreach (int item in prova)
        {

            Console.WriteLine(item);

            //prova.InsertRange

        }

        for (int i = 0; i < prova.Count; i++)
        {
            Console.WriteLine(prova[i] + 1);


        }
    }
}
