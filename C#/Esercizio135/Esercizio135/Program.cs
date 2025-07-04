int somma = 0;
for (int numero = 1; numero <= 10; numero++)
{
    if (numero % 2 != 0)
    {
        continue;
    }
    somma += numero;
}
Console.WriteLine("La somma dei numeri pari da 1 a 10 è: " + somma);