using System;
using Enumeratori;

namespace Enumeratori
{
    class Program
    {
        enum Mesi
        {
            Gennaio, Febbraio, Marzo, Aprile, Maggio, Giugno,
            Luglio, Agosto, Settembre, Ottobre, Novembre, Dicembre

        }

        static void Main(string[] args)
        {
            Mesi meseNascita = Mesi.Giugno;

            switch (meseNascita)
            {
                case Mesi.Giugno:
                    Console.WriteLine("siamo in estate");
                    break;

                case Mesi.Febbraio:
                    Console.WriteLine("siamo in inverno");
                    break;

                case Mesi.Marzo:
                    Console.WriteLine("siamo in primavera");
                    break;

                default:
                    Console.WriteLine("non so che stagione sia");
                    break;

            }
        }
    }
}