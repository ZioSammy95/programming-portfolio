Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci la sottostringa da cercare: ");
string sottostringa = Console.ReadLine();
bool contieneSottostringa = input.Contains(sottostringa);
Console.WriteLine("La stringa contiene la sottostringa? " + contieneSottostringa);