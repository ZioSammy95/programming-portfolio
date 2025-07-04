using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ModificatoriAccesso
{
    class Persona
    {
        public string nome;
        public string cognome;

        public Persona(string nome, string cognome)
        {

        }

        public void Saluta()
        {
            Console.WriteLine();
            
        }
        private void Cucina()
        {
            
            Console.WriteLine();
            
        }
        protected void Respira()
        {
            Console.WriteLine();
            
           
        }
        internal void Balla()
        {
            Console.WriteLine();
            
        }
    }
}

    
