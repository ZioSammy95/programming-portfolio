Console.Write("Inserisci il voto: ");
int voto = int.Parse(Console.ReadLine());
string risultato = (voto >= 60) ? "Voto sufficiente." : "Voto insufficiente.";
Console.WriteLine(risultato);