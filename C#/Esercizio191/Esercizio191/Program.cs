using System;

public class Automobile
{
    public string Marca { get; set; }
    public string Modello { get; set; }

    public void MostraDettagli()
    {
        Console.WriteLine($"Marca: {Marca}");
        Console.WriteLine($"Modello: {Modello}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Automobile auto = new Automobile();
        auto.Marca = "Audi";
        auto.Modello = "Q3";

        auto.MostraDettagli();
    }
}
