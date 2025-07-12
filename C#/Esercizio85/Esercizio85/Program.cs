Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci la sottostringa da cercare: ");
string sottostringa = Console.ReadLine();
string risultato = input.Contains(sottostringa) ? "La stringa contiene la sottostringa." : "La stringa non contiene la sottostringa.";
Console.WriteLine(risultato);