﻿Console.Write("Inserisci un numero intero: ");
int numero = int.Parse(Console.ReadLine());
string risultato = (numero > 0) ? "Il numero è positivo." : (numero < 0) ? "Il numero è negativo." : "Il numero è zero.";
Console.WriteLine(risultato);