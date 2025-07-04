using System;

class Program
{
    static void Main(string[] args)
    {
        int[][] jaggedArray = new int[][]
        {
            new int[] { 1, 2, },
            new int[] { 3, 4, 5 },
            new int[] { 6 },
        };

        int somma = 0;
        for (int i = 0; i < jaggedArray.Length; i++)
        {
            for (int j = 0; j < jaggedArray[i].Length; j++)
            {
                somma += jaggedArray[i][j];
            }
        }
        Console.WriteLine("La somma totale è:" + somma);
    }
}