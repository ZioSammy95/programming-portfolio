Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
Console.Write("Inserisci la sottostringa da sostituire: ");
string daSostituire = Console.ReadLine();
Console.Write("Inserisci la nuova sottostringa: ");
string sostituzione = Console.ReadLine();
string nuovaStringa = input.Replace(daSostituire, sostituzione);
Console.WriteLine("La nuova stringa è: " + nuovaStringa);
