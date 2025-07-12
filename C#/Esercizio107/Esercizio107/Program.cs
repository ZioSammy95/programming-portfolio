int[,] matrice = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int riga = 0;
while (riga < matrice.GetLength(0))
{
    int colonna = 0;
    while (colonna < matrice.GetLength(1))
    {
        Console.WriteLine(matrice[riga, colonna]);
        colonna++;
    }
    riga++;
}