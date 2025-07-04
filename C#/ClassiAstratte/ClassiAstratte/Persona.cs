using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassiAstratte
{
    abstract class Persona
    {
        public string nome;
        public string cognome;
        abstract public int Eta { get; set; }

        public Persona(string nome, string cognome)

        {
            this.nome = nome;
            this.cognome = cognome;
        }

        public abstract void Saluta();
        public virtual void Respira() 
        {
            Console.WriteLine();
        }
        
    }
}