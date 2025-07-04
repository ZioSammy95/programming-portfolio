Console.Write("Inserisci la base: ");
int baseNumero = int.Parse(Console.ReadLine());
Console.Write("Inserisci l'esponente: ");
int esponente = int.Parse(Console.ReadLine());
int potenza = 1;
for (int i = 0; i < esponente; i++)
{
    potenza *= baseNumero;
}
Console.WriteLine("Il risultato è: " + potenza);