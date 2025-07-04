using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio206
{
        class Cerchio : Figura
        {
            public double Raggio { get; set; }

            public override double CalcolaArea()
            {
                return Math.PI * Math.Pow(Raggio, 2);
            }
        }

    }

