Console.Write("Inserisci un numero da 1 a 4: ");
int numero = int.Parse(Console.ReadLine());
string figura;
switch (numero)
{
    case 1:
        figura = "Cerchio";
        break;
    case 2:
        figura = "Quadrato";
        break;
    case 3:
        figura = "Triangolo";
        break;
    case 4:
        figura = "Rettangolo";
        break;
    default:
        figura = "Figura non riconosciuta";
        break;
}
Console.WriteLine("La figura corrispondente è: " + figura);