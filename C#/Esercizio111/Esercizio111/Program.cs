Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
int fattoriale = 1;
for (int i = 1; i <= numero; i++)
{
    fattoriale *= i;
}
Console.WriteLine("Il fattoriale di " + numero + " è: " + fattoriale);