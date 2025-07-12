using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio203
{
    sealed class Gatto
    {
        public void Miagola() => Console.WriteLine("Miao");
    }
}

// class Siamesi : Gatto  // ERRORE: Gatto è sealed