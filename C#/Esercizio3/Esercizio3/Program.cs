using System;

public class Esercizio3
{
    public Esercizio3()
    {
        Console.WriteLine("Inserisci un numero intero:");
        int numero = int.Parse(Console.ReadLine());
        Console.WriteLine("Hai inserito il numero: " + numero);
    }

    public static void Main(string[] args)
    {
        Esercizio3 programma = new Esercizio3();
        Console.ReadLine();
    }
}
