Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
if (numero > 0)
{
    Console.WriteLine("Il numero è positivo.");
}
else if (numero < 0)
{
    Console.WriteLine("Il numero è negativo.");
}
else
{
    Console.WriteLine("Il numero è zero.");
}
