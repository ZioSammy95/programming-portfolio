using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio200
{
    static class Calcolatrice
    {
        public static int Somma(int a, int b)
        {
            return a + b;
        }

        public static int Sottrai(int a, int b)
        {
            return a - b;
        }

        public static int Moltiplica(int a, int b)
        {
            return a * b;
        }

        public static double Dividi(int a, int b)
        {
            if (b == 0)
            {
                Console.WriteLine("Errore: divisione per zero.");
                return double.NaN;
            }
            return (double)a / b;
        }
    }
}