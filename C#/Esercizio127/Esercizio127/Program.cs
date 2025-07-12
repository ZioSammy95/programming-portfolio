Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
char[] caratteri = input.ToCharArray();
Array.Reverse(caratteri);
foreach (char carattere in caratteri)
{
    Console.WriteLine(carattere);
}