Console.Write("Inserisci un numero da 1 a 7: ");
int numero = int.Parse(Console.ReadLine());
string giorno;
switch (numero)
{
    case 1:
        giorno = "Lunedì";
        break;
    case 2:
        giorno = "Martedì";
        break;
    case 3:
        giorno = "Mercoledì";
        break;
    case 4:
        giorno = "Giovedì";
        break;
    case 5:
        giorno = "Venerdì";
        break;
    case 6:
        giorno = "Sabato";
        break;
    case 7:
        giorno = "Domenica";
        break;
    default:
        giorno = "Numero non valido";
        break;
}
Console.WriteLine("Il giorno corrispondente è: " + giorno);