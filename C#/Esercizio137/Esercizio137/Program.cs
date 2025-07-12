int prodotto = 1;
for (int numero = 1; numero <= 10; numero++)
{
    if (numero % 2 == 0)
    {
        continue;
    }
    prodotto *= numero;
}
Console.WriteLine("Il prodotto dei numeri dispari da 1 a 10 è: " + prodotto);