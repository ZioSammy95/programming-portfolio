using System;
using Polimorfismo;

namespace Polimorfismo
{
    class Program
    {
        static void Main(string[] args)
        {
            // var persone = new List<Persona>
            // {
            // new Studente("Samuele", "Virgillito", "5A"),
            //new Insegnante("Anna", "Neri", "Storia")

            // };

            // foreach (Persona persona in persone)
            // {
            // persona.Saluta();

            //}

        Insegnante insegnante1 = new Insegnante("Anna", "Neri", "Storia");
        Persona insegnante2 = new Insegnante("Samuele", "Virgillito", "Matematica");

        insegnante1.Saluta();
        insegnante2.Saluta();
        
        }
    } 
}



