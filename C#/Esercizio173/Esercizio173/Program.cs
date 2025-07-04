using System;

class Program
{
    static void Main()
    {
        // Creo l'array jagged di caratteri
        char[][] parole = new char[][]
        {
            "Ciao".ToCharArray(),
            "Mondo".ToCharArray(),
            "Jagged".ToCharArray()
        };

        // Stampo lettera per lettera
        for (int i = 0; i < parole.Length; i++)
        {
            Console.Write($"Parola {i + 1}: ");
            for (int j = 0; j < parole[i].Length; j++)
            {
                Console.Write(parole[i][j] + " ");
            }
            Console.WriteLine(); // Vai a capo dopo ogni parola
        }
    }
}
