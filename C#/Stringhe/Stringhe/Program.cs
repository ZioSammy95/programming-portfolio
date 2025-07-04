using System;

class Stringhe
{
    static void Main(string[] args)
    {
        string nome = "Samuele";
        string cognome = "Virgillito";
        string stringa = nome.ToUpper();
        string stringa1 = cognome.ToLower();
        string stringa2 = "";
        string stringa3 = "";


        Console.WriteLine(stringa);
        Console.WriteLine(stringa1);
        Console.WriteLine(nome.Length);
        Console.WriteLine(cognome.Substring(cognome.Length-3));


    }
}