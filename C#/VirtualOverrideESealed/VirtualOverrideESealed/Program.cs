using System;
using System.Collections;
using System.Collections.Generic;

namespace VirtualOverrideESealed
{
    class Program
    {
        static void Main(string[] args)
        {
            Studente studente1 = new Studente("Samuele", "Virgillito", "5A");
            Insegnante insegnante1 = new Insegnante("Anna", "Neri", "Storia");
            InsegnanteBallo insegnanteBallo = new InsegnanteBallo("Marco", "Verdi", "House", "log in - gemini");
            insegnante1.Saluta();
            studente1.Saluta();
            insegnanteBallo.Saluta();





        }
    }
}