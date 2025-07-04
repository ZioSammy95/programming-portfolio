List<string> parole = new List<string>() { "cane", "gatto", "topo", "elefante" };
string parolaCercata = "cane";
bool trovato = false;
foreach (string parola in parole)
{
    if (parola == parolaCercata)
    {
        trovato = true;
        break;
    }
}
if (trovato)
{
    Console.WriteLine("La parola è presente nella lista.");
}
else
{
    Console.WriteLine("La parola non è presente nella lista.");
}