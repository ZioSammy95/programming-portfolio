using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio207
{
    class Gatto : Animale
    {
        public override void EmettiSuono()
        {
            base.EmettiSuono();

            Console.WriteLine("Il gatto miagola: Miao miao!");

        }
    }
}