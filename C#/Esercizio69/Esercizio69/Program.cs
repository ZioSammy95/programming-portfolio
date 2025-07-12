Console.Write("Inserisci il voto: ");
int voto = int.Parse(Console.ReadLine());
if (voto >= 60)
{
    Console.WriteLine("Voto sufficiente.");
}
else
{
    Console.WriteLine("Voto insufficiente.");
}