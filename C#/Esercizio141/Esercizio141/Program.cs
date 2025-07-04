static string ConcatenaStringhe(string primaStringa, string secondaStringa)
{
    string risultato = primaStringa + secondaStringa;
    return risultato;
}

// Esempio di utilizzo del metodo:
string stringa1 = "Ciao, ";
string stringa2 = "come stai?";
string risultatoConcatenazione = ConcatenaStringhe(stringa1, stringa2);
Console.WriteLine("Risultato della concatenazione: " + risultatoConcatenazione);