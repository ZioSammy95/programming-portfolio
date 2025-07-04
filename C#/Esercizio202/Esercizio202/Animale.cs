using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio202
{
     class Animale
    {
        public string Nome {  get; set; }
        public void EmettereSuono()
        {
            Console.WriteLine("L'animale emette un suono.");
        }
    }
}
