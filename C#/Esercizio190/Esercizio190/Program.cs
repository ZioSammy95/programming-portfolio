using System;

public class Persona
{
    public string Nome { get; set; }
    public string Cognome { get; set; }

    public void StampaInformazioni()
    {
        Console.WriteLine($"Nome: {Nome}");
        Console.WriteLine($"Cognome: {Cognome}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Persona persona = new Persona();
        persona.Nome = "Samuele";
        persona.Cognome = "Virgillito";
        persona.StampaInformazioni();
    }
}
