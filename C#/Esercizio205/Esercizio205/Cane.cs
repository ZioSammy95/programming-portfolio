using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio205
{
    class Cane : IRecitabile
    {
        public void Recita()
        {
            Console.WriteLine("Il cane abbaia: Bau bau!");
        }
    }
}