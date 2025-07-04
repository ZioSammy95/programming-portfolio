using System;

public class Studente
{
    public string Nome { get; set; }
    public string Cognome { get; set; }
    public string Matricola { get; set; }

    public void StampaInformazioni()
    {
        Console.WriteLine($"Nome: {Nome}");
        Console.WriteLine($"Cognome: {Cognome}");
        Console.WriteLine($"Matricola: {Matricola}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Studente studente = new Studente();
        studente.Nome = "Samuele";
        studente.Cognome = "Virgillito";
        studente.Matricola = "A12345";

        studente.StampaInformazioni();
    }
}
