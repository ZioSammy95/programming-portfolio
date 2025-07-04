using System;

public class Stringhe
{
    // Metodo base: concatena due stringhe
    public string ConcatenaStringhe(string s1, string s2)
    {
        return s1 + s2;
    }

    // Metodo sovraccaricato: concatena tre stringhe
    public string ConcatenaStringhe(string s1, string s2, string s3)
    {
        return s1 + s2 + s3;
    }

    // Metodo sovraccaricato: concatena due stringhe con un separatore
    public string ConcatenaStringhe(string s1, string s2, char separatore)
    {
        return s1 + separatore + s2;
    }
}

class Programma
{
    static void Main()
    {
        Stringhe str = new Stringhe();

        string risultato1 = str.ConcatenaStringhe("Ciao", "Mondo");               // Due stringhe
        string risultato2 = str.ConcatenaStringhe("Buongiorno", "a", "tutti");     // Tre stringhe
        string risultato3 = str.ConcatenaStringhe("Samuele", "Virgillito", ' ');         // Due stringhe con separatore

        Console.WriteLine(risultato1); // Output: CiaoMondo
        Console.WriteLine(risultato2); // Output: Buongiornoatutti
        Console.WriteLine(risultato3); // Output: Nome Cognome
    }
}
