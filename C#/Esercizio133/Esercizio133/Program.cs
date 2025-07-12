Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
foreach (char carattere in input)
{
    if ("aeiouAEIOU".Contains(carattere))
    {
        continue;
    }
    Console.WriteLine(carattere);
}