using System;

public class Geometria
{
    // Metodo che accetta un raggio come double
    public double CalcolaAreaCerchio(double raggio)
    {
        return Math.PI * raggio * raggio;
    }

    // Metodo sovraccaricato che accetta un raggio come int
    public double CalcolaAreaCerchio(int raggio)
    {
        return Math.PI * raggio * raggio;
    }
}

class Programma
{
    static void Main()
    {
        Geometria geo = new Geometria();

        double area1 = geo.CalcolaAreaCerchio(5.0);  // Chiamata con double
        double area2 = geo.CalcolaAreaCerchio(5);    // Chiamata con int

        Console.WriteLine($"Area con double: {area1}");
        Console.WriteLine($"Area con int: {area2}");
    }
}

