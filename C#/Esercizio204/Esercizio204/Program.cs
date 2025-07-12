using System;
using Esercizio204;

public interface IForma
{
    double CalcolaArea();
}

class Program
{
    static void Main()
    {
        // Istanza di Quadrato
        IForma quadrato = new Quadrato(5); // lato = 5
        Console.WriteLine("Area del quadrato: " + quadrato.CalcolaArea());

        // Istanza di Cerchio
        IForma cerchio = new Cerchio(3); // raggio = 3
        Console.WriteLine("Area del cerchio: " + cerchio.CalcolaArea());
    }
}