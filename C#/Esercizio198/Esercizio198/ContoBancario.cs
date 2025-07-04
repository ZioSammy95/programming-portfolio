using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Esercizio198
{
    class ContoBancario
    {
        private string titolare;
        private decimal saldo;

        // Getter e Setter per il titolare
        public string Titolare
        {
            get { return titolare; }
            set { titolare = value; }
        }

        // Solo getter per il saldo (non modificabile dall'esterno)
        public decimal Saldo
        {
            get { return saldo; }
        }

        // Metodo per depositare
        public void Deposita(decimal importo)
        {
            if (importo > 0)
            {
                saldo += importo;
                Console.WriteLine($"Hai depositato {importo}€");
            }
            else
            {
                Console.WriteLine("Importo non valido per il deposito.");
            }
        }

        // Metodo per prelevare
        public void Preleva(decimal importo)
        {
            if (importo > 0 && importo <= saldo)
            {
                saldo -= importo;
                Console.WriteLine($"Hai prelevato {importo}€");
            }
            else
            {
                Console.WriteLine("Operazione non valida: fondi insufficienti o importo errato.");
            }
        }

        // Stampa il saldo attuale
        public void MostraSaldo()
        {
            Console.WriteLine($"Saldo attuale: {saldo}€");
        }
    }
    
    }

