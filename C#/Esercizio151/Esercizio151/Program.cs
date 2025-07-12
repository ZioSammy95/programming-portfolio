int[] numeri = { 1, 2, 3, 4, 5 };
int somma = 0;
for (int i = 0; i < numeri.Length; i++)
{
    somma += numeri[i];
}
Console.WriteLine("La somma degli elementi dell'array è: " + somma);