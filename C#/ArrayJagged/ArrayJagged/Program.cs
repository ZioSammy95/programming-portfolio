using System;

class Program
{
    static void Main(string[] args)

    {
        int[][] array_irregolare =
        {
            new int[] { 1, 2, 3, 4},
            new int[] { 10, 20},
            new int[] { 10, 100, 1000},
            new int[] { 0, 5, 10},



        };

        for (int riga = 0; riga < array_irregolare.Length; riga++)
        {
            for (int colonna = 0; colonna < array_irregolare[riga].Length; colonna++)
            {
                Console.WriteLine($" riga { riga}, colonna { colonna}: valore {array_irregolare[riga][colonna]}");


            }

        }
    }
}
    