using System;

class Program
{
    static void Main()
    {
        // Creo l'array jagged
        int[][] jaggedArray = new int[][]
        {
            new int[] { 10, 20 },
            new int[] { 30, 40, 50 },
            new int[] { 60 }
        };

        // Stampo gli elementi
        for (int i = 0; i < jaggedArray.Length; i++)
        {
            Console.Write($"Riga {i + 1}: ");
            for (int j = 0; j < jaggedArray[i].Length; j++)
            {
                Console.Write(jaggedArray[i][j] + " ");
            }
            Console.WriteLine();
        }
    }
}
