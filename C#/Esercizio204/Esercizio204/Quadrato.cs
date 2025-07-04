using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio204
{
    public class Quadrato : IForma
    {
        public double Lato { get; set; }

        public Quadrato(double lato)
        {
            Lato = lato;
        }

        public double CalcolaArea()
        {
            return Lato * Lato;
        }
    }
}