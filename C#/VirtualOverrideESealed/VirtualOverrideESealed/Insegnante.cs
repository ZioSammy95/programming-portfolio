using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VirtualOverrideESealed
{
    class Insegnante : Persona
    {

        public string materia;

        public Insegnante(string nome, string cognome, string materia) : base(nome, cognome)
        {

            this.materia = materia;
        }

        public sealed override void Saluta() 
        {
            
            Console.WriteLine("Buongiorno ragazzi!");
        }
        public void Insegna() { }
    }
}
