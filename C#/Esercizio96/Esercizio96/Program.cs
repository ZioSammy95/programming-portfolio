﻿Console.Write("Inserisci un numero da 1 a 4: ");
int numero = int.Parse(Console.ReadLine());
string stagione;
switch (numero)
{
    case 1:
        stagione = "Primavera";
        break;
    case 2:
        stagione = "Estate";
        break;
    case 3:
        stagione = "Autunno";
        break;
    case 4:
        stagione = "Inverno";
        break;
    default:
        stagione = "Stagione non riconosciuta";
        break;
}
Console.WriteLine("La stagione corrispondente è: " + stagione);