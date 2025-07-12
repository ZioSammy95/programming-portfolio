int numero = 1;
while (numero <= 100)
{
    Console.WriteLine(numero);
    if (numero % 7 == 0)
    {
        break;
    }
    numero++;
}