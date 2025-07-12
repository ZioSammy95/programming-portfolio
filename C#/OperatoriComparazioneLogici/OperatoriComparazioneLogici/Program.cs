using System;

class Program
{
    static void Main(string[] args)
    {
        bool isOnline = true;

        Console.WriteLine(5 == 5); // UGUALE A
        Console.WriteLine(5 != 6); // DIVERSO DA
        Console.WriteLine(5 > 6);  // MAGGIORE DI
        Console.WriteLine(5 >= 6); // MAGGIORE UGUALE DI
        Console.WriteLine(5 < 6); // MINORE DI
        Console.WriteLine(5 <= 6); // MINORE UGUALE DI
        Console.WriteLine(5 < 6 && 5 == 5); // AND
        Console.WriteLine(5 > 6 || 5 == 5); // OR
        Console.WriteLine(!isOnline); // NOT

        Console.Read();
    }
}
