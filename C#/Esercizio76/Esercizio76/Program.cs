﻿Console.Write("Inserisci un numero intero (1-3): ");
int numero = int.Parse(Console.ReadLine());
if (numero == 1)
{
    Console.WriteLine("Hai scelto l'opzione 1.");
}
else if (numero == 2)
{
    Console.WriteLine("Hai scelto l'opzione 2.");
}
else if (numero == 3)
{
    Console.WriteLine("Hai scelto l'opzione 3.");
}
else
{
    Console.WriteLine("Opzione non valida.");
}