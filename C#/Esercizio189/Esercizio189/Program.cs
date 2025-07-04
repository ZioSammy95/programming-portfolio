using System;

public class Persona
{
    // Attributi
    public string Nome { get; set; }
    public int Eta { get; set; }

    // Metodo per mostrare le informazioni
    public void MostraInfo()
    {
        Console.WriteLine($"Nome: {Nome}, Età: {Eta} anni");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Prima istanza di Persona
        Persona persona1 = new Persona();
        persona1.Nome = "Samuele";
        persona1.Eta = 25;

        // Seconda istanza di Persona
        Persona persona2 = new Persona();
        persona2.Nome = "Anna";
        persona2.Eta = 22;

        // Mostrare le informazioni
        persona1.MostraInfo();
        persona2.MostraInfo();
    }
}


