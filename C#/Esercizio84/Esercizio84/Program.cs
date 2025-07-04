Console.Write("Inserisci la prima stringa: ");
string stringa1 = Console.ReadLine();
Console.Write("Inserisci la seconda stringa: ");
string stringa2 = Console.ReadLine();
string risultato = (stringa1.Length > stringa2.Length) ? "La prima stringa è più lunga." : (stringa1.Length < stringa2.Length) ? "La seconda stringa è più lunga." : "Le due stringhe hanno la stessa lunghezza.";
Console.WriteLine(risultato);