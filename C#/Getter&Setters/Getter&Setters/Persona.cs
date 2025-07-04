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

        // public int MyProperty { get; set; } // PROP

        public void SetEta(int eta)
        {
        if (eta >= 0) this.eta = eta;
        else Console.WriteLine("hai messo un eta' negativa, imperdonabile!!");
            }
        
        public int GetEta()
        {
            return this.eta;
        }
        public Persona(string nome, string cognome, int eta)
        {

            this.cognome = cognome;
            this.eta = eta;
        }
        public Persona(string cognome, int eta)
        {
            this.nome = cognome;
            this.eta = eta;
        }
        public Persona(int eta)
        {

        }

        public void Saluta()
        {
            Console.WriteLine($"ciao sono {this.nome}");
        }

    }
}
    

