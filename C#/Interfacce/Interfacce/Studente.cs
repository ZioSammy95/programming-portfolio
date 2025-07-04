using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Interfacce;

namespace Interfacce
{
    class Studente : Persona, IEquatable<Studente>
    {
        
        public string classe;

        public Studente(string nome, string cognome, string materia) : base(nome, cognome)
        {

            this.classe = classe;
        }

        public override void Saluta()
        {
            Console.WriteLine("Buongiorno Prof!");
        }
        public void Studia() { }

        public bool Equals(Studente studente)
        {
            return this.classe == studente.classe;
        }
    }
}
