using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio204
{
    public class Cerchio : IForma
    {
        public double Raggio { get; set; }

        public Cerchio(double raggio)
        {
            Raggio = raggio;
        }

        public double CalcolaArea()
        {
            return Math.PI * Raggio * Raggio;
        }
    }
}