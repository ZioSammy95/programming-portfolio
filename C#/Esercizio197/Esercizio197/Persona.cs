using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio197
{
    class Persona
    {
            private string nome;
            private int eta;

            // Getter e Setter per il nome
            public string Nome
            {
                get { return nome; }
                set { nome = value; }
            }

            // Getter e Setter per l'età, con controllo
            public int Eta
            {
                get { return eta; }
                set
                {
                    if (value >= 0)
                        eta = value;
                    else
                        Console.WriteLine("L'età non può essere negativa.");
                }
            }

            // Metodo per stampare le informazioni
            public void StampaInformazioni()
            {
                Console.WriteLine($"Nome: {Nome}");
                Console.WriteLine($"Età: {Eta} anni");
            }
        }
    }

