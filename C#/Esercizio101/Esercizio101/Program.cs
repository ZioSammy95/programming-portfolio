Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
int fattoriale = 1;
int i = 1;
while (i <= numero)
{
    fattoriale *= i;
    i++;
}
Console.WriteLine("Il fattoriale di " + numero + " è: " + fattoriale);