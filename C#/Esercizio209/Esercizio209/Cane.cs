using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio209
{
    class Cane : Animale
    {
        public override void EmettiSuono()
        {
            Console.WriteLine("Il cane abbaia: Bau bau!");
        }
    }
}