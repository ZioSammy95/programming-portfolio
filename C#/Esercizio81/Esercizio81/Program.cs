Console.Write("Inserisci una lettera: ");
char lettera = char.ToLower(Console.ReadKey().KeyChar);
string risultato = (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u') ? "La lettera è una vocale." : "La lettera è una consonante.";
Console.WriteLine(risultato);