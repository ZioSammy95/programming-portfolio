Console.Write("Inserisci l'età: ");
int eta = int.Parse(Console.ReadLine());
string risultato = (eta >= 18) ? "Sei maggiorenne." : "Sei minorenne.";
Console.WriteLine(risultato);