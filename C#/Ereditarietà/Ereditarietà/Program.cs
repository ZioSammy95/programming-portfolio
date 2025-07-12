using System;
using System.Collections;
using System.Collections.Generic;

namespace Ereditarietà
{
    class Program
    {
        static void Main(string[] args)
        {
            Studente studente1 = new Studente("Samuele", "Virgillito", "5A");
            Insegnante insegnante1 = new Insegnante("Anna", "Neri", "Storia");
            studente1.Saluta();
            studente1.Studia();





        }
    }
}