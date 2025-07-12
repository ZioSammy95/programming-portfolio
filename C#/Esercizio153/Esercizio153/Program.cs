int[] arrayOriginale = { 1, 2, 3, 4, 5 };
int[] arrayCopia = new int[arrayOriginale.Length];
for (int i = 0; i < arrayOriginale.Length; i++)
{
    arrayCopia[i] = arrayOriginale[i];
}
Console.WriteLine("Array originale: " + string.Join(", ", arrayOriginale));
Console.WriteLine("Array copia: " + string.Join(", ", arrayCopia));