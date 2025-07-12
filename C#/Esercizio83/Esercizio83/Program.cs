Console.Write("Inserisci la temperatura in gradi Celsius: ");
double temperatura = double.Parse(Console.ReadLine());
string risultato = (temperatura < 0) ? "La temperatura è inferiore a 0." : "La temperatura è superiore o uguale a 0.";
Console.WriteLine(risultato);