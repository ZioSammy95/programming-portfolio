Console.Write("Inserisci il prezzo: ");
double prezzo = double.Parse(Console.ReadLine());
Console.Write("Inserisci lo sconto percentuale: ");
double scontoPercentuale = double.Parse(Console.ReadLine());
double prezzoScontato = (scontoPercentuale >= 0 && scontoPercentuale <= 100) ? prezzo - (prezzo * (scontoPercentuale / 100)) : prezzo;
Console.WriteLine("Il prezzo scontato è: " + prezzoScontato);