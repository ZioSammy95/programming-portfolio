using System;
using Esercizio209;

namespace Esercizio209
{
    class program
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