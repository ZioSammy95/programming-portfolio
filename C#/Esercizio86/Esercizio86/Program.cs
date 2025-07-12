Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
string risultato = (numero > 10 && numero < 20) ? "Il numero è compreso tra 10 e 20." : "Il numero non è compreso tra 10 e 20.";
Console.WriteLine(risultato);