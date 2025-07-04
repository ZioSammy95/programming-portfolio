using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassiAstratte
{
    class Insegnante : Persona
    {
        public string materia;

        public Insegnante(string nome, string cognome, string materia) : base(nome, cognome)
        {
            this.materia = materia;
        }

        public override void Saluta()
        {
            throw new NotImplementedException();
        }
    }
}
