﻿Console.Write("Inserisci un carattere: ");
char carattere = Console.ReadKey().KeyChar;
string descrizione;
switch (char.ToLower(carattere))
{
    case 'a':
        descrizione = "Vocale";
        break;
    case 'b':
    case 'c':
    case 'd':
        descrizione = "Consonante";
        break;
    case '1':
    case '2':
    case '3':
        descrizione = "Numero";
        break;
    default:
        descrizione = "Carattere non riconosciuto";
        break;
}
Console.WriteLine("Il carattere è: " + descrizione);