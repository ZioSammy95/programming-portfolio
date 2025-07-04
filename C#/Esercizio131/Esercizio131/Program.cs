int numero = 1;
while (numero <= 10)
{
    if (numero % 3 == 0)
    {
        numero++;
        continue;
    }
    Console.WriteLine(numero);
    numero++;
}
