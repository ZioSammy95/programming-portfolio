using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ereditarietà
{
    class Studente: Persona
    {
        public string nome;
        public string cognome;
        public string classe;

        public Studente(string nome, string cognome, string materia) : base(nome, cognome)
        {

            this.classe = classe;
        }

        
        public void Studia() { }
    }
}
