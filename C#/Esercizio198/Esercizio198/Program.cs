using System;
using Esercizio198;

class Program
{
    static void Main()
    {
        ContoBancario conto = new ContoBancario();

        Console.Write("Inserisci il nome del titolare: ");
        conto.Titolare = Console.ReadLine();

        conto.Deposita(500);
        conto.MostraSaldo();

        conto.Preleva(200);
        conto.MostraSaldo();

        conto.Preleva(100); // dovrebbe dare errore per fondi insufficienti
    }
}