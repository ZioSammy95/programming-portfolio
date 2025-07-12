Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci il delimitatore: ");
string delimitatore = Console.ReadLine();
string[] sottostringhe = input.Split(delimitatore);
Console.WriteLine("Le sottostringhe ottenute sono:");
foreach (string s in sottostringhe)
{
    Console.WriteLine(s);
}