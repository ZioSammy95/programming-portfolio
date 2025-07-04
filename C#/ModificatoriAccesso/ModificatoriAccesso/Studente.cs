using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ModificatoriAccesso;

namespace ModificatoriAccesso
{
    class Studente : Persona
    {
        public string classe;

        public Studente(string nome, string cognome, string v) : base(nome, cognome)
        {
            this.classe = classe;
        }
        public void prova()
        {
            base.Respira();

        }
    }
}   