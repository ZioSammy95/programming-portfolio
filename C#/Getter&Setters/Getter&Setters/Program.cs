using System;
using Getter_Setters;

class Program
{
    static void Main(string[] args)
    {
        Persona persona1 = new Persona("Samuele","Virgillito", 29);

        persona1.SetEta(-2);  // SETTER
        Console.WriteLine(persona1.GetEta()); //GETTER

      

    }
}
