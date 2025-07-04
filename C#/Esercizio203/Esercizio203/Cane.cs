using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio203
{
    class Cane : Animale
    {
        public sealed override void Verso()
        {
            Console.WriteLine("Bau!");
        }
    }
}