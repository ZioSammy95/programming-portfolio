using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Insegnante:Persona
    {
        public string materia;

            public Insegnante(string nome, string cognome, string materia) : base(nome,cognome)
        {
            this.materia = materia;
        }
    public new void Saluta()
        {
            Console.WriteLine($"Buongiorno ragazzi sono {nome} {cognome}");
        }
    }
}
