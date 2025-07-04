Console.Write("Inserisci il codice identificativo della bevanda (C, T, S, A): ");
char codice = char.ToUpper(Console.ReadKey().KeyChar);
string bevanda;
switch (codice)
{
    case 'C':
        bevanda = "Caffè";
        break;
    case 'T':
        bevanda = "Tè";
        break;
    case 'S':
        bevanda = "Succo";
        break;
    case 'A':
        bevanda = "Acqua";
        break;
    default:
        bevanda = "Bevanda non riconosciuta";
        break;
}
Console.WriteLine("La bevanda corrispondente è: " + bevanda);