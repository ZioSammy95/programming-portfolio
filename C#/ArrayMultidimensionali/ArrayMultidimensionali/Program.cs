using System;

int[,,] cubo = new int[2, 2, 2];

// Assegno i valori
cubo[0, 0, 0] = 1;
cubo[0, 0, 1] = 2;
cubo[0, 1, 0] = 3;
cubo[0, 1, 1] = 4;
cubo[1, 0, 0] = 5;
cubo[1, 0, 1] = 6;
cubo[1, 1, 0] = 7;
cubo[1, 1, 1] = 8;

for (int i = 0; i < cubo.GetLength(0); i++) // piano
{
    for (int j = 0; j < cubo.GetLength(1); j++) // riga
    {
        for (int k = 0; k < cubo.GetLength(2); k++) // colonna
        {
            Console.Write(cubo[i, j, k] + " ");
        }
        Console.WriteLine();
    }
    Console.WriteLine("---- Piano " + i + " ----");
}
