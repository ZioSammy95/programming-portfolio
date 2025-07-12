using System;

namespace Esercizio207
{
    class Program
    {
        static void Main(string[] args)
        {
            Cane cane = new Cane();
            cane.EmettiSuono();

            Gatto gatto = new Gatto();
            gatto.EmettiSuono();
        }
    }
}