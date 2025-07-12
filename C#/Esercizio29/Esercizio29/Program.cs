using System;

class Program
{
    // Dichiarazione dell'enumerazione
    enum MesiAnno
    {
        Gennaio,   // 0
        Febbraio,  // 1
        Marzo,     // 2
        Aprile,    // 3
        Maggio,    // 4
        Giugno,    // 5
        Luglio,    // 6
        Agosto,    // 7
        Settembre, // 8
        Ottobre,   // 9
        Novembre,  // 10
        Dicembre   // 11
    }

    static void Main(string[] args)
    {
        // Scelta di un valore dell'enumerazione
        MesiAnno mese = MesiAnno.Marzo;

        // Conversione in intero tramite casting
        int valoreIntero = (int)mese;

        // Stampa del valore intero
        Console.WriteLine($"Il valore intero di {mese} è: {valoreIntero}");
    }
}
