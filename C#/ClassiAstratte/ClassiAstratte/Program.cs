using System;
using ClassiAstratte;

namespace ClassiAstratte
{
    class Program
    {
        static void Main(string[] args)
        {
           

            Insegnante insegnante1 = new Insegnante("Anna", "Neri", "Storia");
            Persona insegnante2 = new Insegnante("Samuele", "Virgillito", "Matematica");
            

            insegnante1.Saluta();
            insegnante2.Saluta();

        }
    }
}
