int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int sommaDiagonale = 0;
for (int i = 0; i < matrice.GetLength(0); i++)
{
    sommaDiagonale += matrice[i, i];
}
Console.WriteLine("La somma degli elementi sulla diagonale principale è: " + sommaDiagonale);