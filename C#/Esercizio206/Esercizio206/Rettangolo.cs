using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio206
{
   
        class Rettangolo : Figura
        {
            public double Larghezza { get; set; }
            public double Altezza { get; set; }

            public override double CalcolaArea()
            {
                return Larghezza * Altezza;
            }

      
    
    }

    }
