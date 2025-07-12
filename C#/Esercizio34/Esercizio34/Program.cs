Console.Write("Inserisci il tuo nome: ");
string nome = Console.ReadLine();
Console.Write("Inserisci la tua età: ");
int eta = int.Parse(Console.ReadLine());
string frase = $"Il tuo nome è {nome} e hai {eta} anni.";
Console.WriteLine(frase);