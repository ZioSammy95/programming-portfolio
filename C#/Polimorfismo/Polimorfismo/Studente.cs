using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polimorfismo
{
    class Studente: Persona
    {
        public string classe;

    public Studente(string nome, string cognome, string v) : base(nome, cognome)
        {
            this.classe = classe;
        }
        public override void Saluta()
        {
            Console.WriteLine($"Buongiorno prof sono {nome} {cognome}");
        }
    }

}
