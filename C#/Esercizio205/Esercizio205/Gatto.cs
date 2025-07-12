using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio205
{
    class Gatto : IRecitabile
    {
        public void Recita()
        {
            Console.WriteLine("Il gatto miagola: Miao miao!");
        }
    }
}