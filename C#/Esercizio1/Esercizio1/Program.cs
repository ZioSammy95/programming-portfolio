using System;

public class Esercizio1
{
    public Esercizio1()
    {
        int numero1, numero2, numero3;
        numero1 = 10;
        numero2 = 20;
        numero3 = 30;

        Console.WriteLine("Numero1: " + numero1);
        Console.WriteLine("Numero2: " + numero2);
        Console.WriteLine("Numero3: " + numero3);
    }

    public static void Main(string[] args)
    {
        // Istanzio l'oggetto per eseguire il costruttore
        Esercizio1 programma = new Esercizio1();

        // Tieni aperta la console
        Console.ReadLine();
    }
}
