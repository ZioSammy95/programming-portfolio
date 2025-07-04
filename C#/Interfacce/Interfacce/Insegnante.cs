using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Interfacce;

namespace Interfacce
{
    class Insegnante : IEquatable<Insegnante>
    {
        public string nome;
        public string cognome;
        public string materia;

        public Insegnante(string nome, string cognome, string materia)
        {
            this.nome = nome;
            this.cognome = cognome;
            this.materia = materia;
        }


        public void Insegna() { }

        public bool Equals(Insegnante insegnante) 
        {
            return this.nome.Equals(insegnante.nome);
        }
    }
}
