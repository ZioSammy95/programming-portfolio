using System;
using System.Collections;
using System.Runtime.InteropServices;

class Program
{
    static void Main(string[] args)
    {
        // ferrari portofino (classe)
        //miniatura (istanza) miniatura2 (istanza) miniatura3 (istanza)
        // queste miniature sono degli (oggetti)

        Persona persona1 = new Persona();
        persona1.nome = "Samuele";
        persona1.Saluta();

    }

    class Persona
    {
        public string nome;

       public void Saluta()
        {
            Console.WriteLine($"ciao sono {this.nome}");
        }

    }
}
    



