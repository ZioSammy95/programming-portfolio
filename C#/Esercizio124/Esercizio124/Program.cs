Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
int conteggio = 0;
foreach (char carattere in input)
{
    conteggio++;
}
Console.WriteLine("Il numero di caratteri nella stringa è: " + conteggio);