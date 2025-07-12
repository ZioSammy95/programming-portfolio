using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio199
{
    class Utente
    {
        private string nome;
        private static int contatoreUtenti = 0; // campo statico

        // Costruttore
        public Utente(string nome)
        {
            this.nome = nome;
            contatoreUtenti++; // incrementa ogni volta che si crea un utente
        }

        public void Saluta()
        {
            Console.WriteLine($"Ciao, sono {nome}!");
        }

        // Metodo statico per leggere il contatore
        public static void MostraTotaleUtenti()
        {
            Console.WriteLine($"Totale utenti creati: {contatoreUtenti}");
        }

    }
}