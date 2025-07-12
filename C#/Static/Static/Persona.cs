using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Getter_Setters
{
    internal class Persona
    {

        public string nome;
        public string cognome;
        public int eta;
        static public int numeroPersona = 0;



       
        public Persona(string nome, string cognome, int eta)
        {
            this.nome = nome;
            this.cognome = cognome;
            this.eta = eta;
            Persona.numeroPersona++;
            Console.WriteLine(Persona.numeroPersona);
        }
        static public void Saluta(string nome)
        {
            Console.WriteLine($"Ciao sono {nome}");
        }

    }
}

