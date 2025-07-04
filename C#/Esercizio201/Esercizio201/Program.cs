using System;
using System.Collections;
using System.Collections.Generic;
using Esercizio201;

class Program
{
    static void Main(string[] args)
    {
        Automobile automobile = new Automobile();
        automobile.Marca = "Audi";
        automobile.Acceleratore(20);
        Console.WriteLine("Velocità dell'automobile: " + automobile.Velocità);

        Motocicletta motocicletta = new Motocicletta();
        motocicletta.Cilindrata= 500;
        automobile.Acceleratore(30);
        Console.WriteLine("Velocità della Motocicletta: " + motocicletta.Velocità);





    }

}
