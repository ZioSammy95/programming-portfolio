using System;
using System.Net.Security;
using Esercizio208;

namespace Esercizio208
{
    class Program
    {

        static void Main(string[]args )
       {
            Automobile automobile = new Automobile();
            int velocitaMassimaAutomobile = automobile.CalcolaVelocitaMassima();
            Console.WriteLine("Velocità massima dell'automobile: " + velocitaMassimaAutomobile);

            Motocicletta motocicletta = new Motocicletta();
            int velocitaMassimaMotocicletta = motocicletta.CalcolaVelocitaMassima();
            Console.WriteLine("Velocità massima della motocicletta: " + velocitaMassimaMotocicletta);

        }
    }
}