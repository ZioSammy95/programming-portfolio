using System;

public class Matematica
{
    // Metodo che accetta un int
    public int CalcolaQuadrato(int numero)
    {
        return numero * numero;
    }

    // Metodo sovraccaricato che accetta un double
    public double CalcolaQuadrato(double numero)
    {
        return numero * numero;
    }

    // Metodo sovraccaricato che accetta un float
    public float CalcolaQuadrato(float numero)
    {
        return numero * numero;
    }
}

class Programma
{
    static void Main()
    {
        Matematica math = new Matematica();

        int quadratoInt = math.CalcolaQuadrato(5);        // int
        double quadratoDouble = math.CalcolaQuadrato(5.5); // double
        float quadratoFloat = math.CalcolaQuadrato(3.2f);  // float

        Console.WriteLine($"Quadrato di 5 (int): {quadratoInt}");
        Console.WriteLine($"Quadrato di 5.5 (double): {quadratoDouble}");
        Console.WriteLine($"Quadrato di 3.2 (float): {quadratoFloat}");
    }
}
