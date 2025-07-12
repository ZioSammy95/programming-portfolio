using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio201
{
    class Veicolo
    {
        public int Velocità { get; set; }
        public void Acceleratore(int incremento)
        {
            Velocità += incremento;
        }
    }
}
