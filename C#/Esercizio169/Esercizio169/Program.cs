﻿int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
for (int colonna = 0; colonna < matrice.GetLength(1); colonna++)
{
    int valoreMassimo = matrice[0, colonna];
    for (int riga = 1; riga < matrice.GetLength(0); riga++)
    {
        if (matrice[riga, colonna] > valoreMassimo)
        {
            valoreMassimo = matrice[riga, colonna];
        }
    }
    Console.WriteLine("Il valore massimo nella colonna " + colonna + " è: " + valoreMassimo);
}