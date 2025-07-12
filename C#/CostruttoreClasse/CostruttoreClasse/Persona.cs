using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace CostruttoreClasse
{    internal class Persona
    {
        public string nome;
        public string cognome;
        public int eta;

        public Persona()
        {}
        public Persona(string nome, string cognome, int eta)
        {
            
            this.cognome = cognome;
            this.eta = eta;
        }
        public Persona (string cognome , int eta)
        {
            this.nome = cognome;
            this.eta = eta;
        }
        public Persona (int eta)
        {

        }
        
        public void Saluta()
        {
            Console.WriteLine($"ciao sono {this.nome}");
        }

    }
}