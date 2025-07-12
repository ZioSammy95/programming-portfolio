using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio207
{
    class Cane : Animale
    {
        public override void EmettiSuono()
        {
            base.EmettiSuono();


            Console.WriteLine("Il cane abbaia: Bau bau!");

        }
    }
}