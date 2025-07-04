using System;
using System.Collections;
using System.Collections.Generic;

namespace Interfacce    
{
    class Program
    {
        static void Main(string[] args)
        {
            Studente studente1 = new Studente("Samuele", "Virgillito", "5A");
            Studente studente2 = new Studente("Grazia", "Virgillito", "5A");
            Insegnante insegnante1 = new Insegnante("Anna", "Neri", "Storia");
            Insegnante insegnante2 = new Insegnante("Marco", "Verdi", "Storia");

            Console.WriteLine(insegnante1.Equals(insegnante2));



        }
    }
}