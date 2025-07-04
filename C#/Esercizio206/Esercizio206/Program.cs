using System;
using System.Runtime.InteropServices;

namespace Esercizio206
{

    class Program
    {
        static void Main()
        {
            // Rettangolo
            Rettangolo rettangolo = new Rettangolo();
            rettangolo.Larghezza = 5;
            rettangolo.Altezza = 10;
            Console.WriteLine($"Area del rettangolo: {rettangolo.CalcolaArea()}");

            // Cerchio
            Cerchio cerchio = new Cerchio();
            cerchio.Raggio = 3;
            Console.WriteLine($"Area del cerchio: {cerchio.CalcolaArea()}");
        }
    }
}


