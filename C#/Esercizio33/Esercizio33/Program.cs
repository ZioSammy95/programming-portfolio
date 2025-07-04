Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci l'indice di partenza: ");
int indice = int.Parse(Console.ReadLine());
string sottostringa = input.Substring(indice);
Console.WriteLine("La sottostringa è: " + sottostringa);