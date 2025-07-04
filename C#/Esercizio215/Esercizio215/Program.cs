using System;

namespace EsempioEnumSwitch
{
    // Definizione dell'enum
    enum GiorniSettimana
    {
        NessunGiorno = -1,
        Lunedi,
        Martedi,
        Mercoledi,
        Giovedi,
        Venerdi,
        Sabato,
        Domenica
    }

    class Program
    {
        static void Main(string[] args)
        {
            // Dichiarazione e assegnazione di una variabile enum
            GiorniSettimana oggi = GiorniSettimana.Martedi;

            // Uso dello switch con l'enum
            StampaMessaggioDelGiorno(oggi);

            // Esempio con input da stringa
            Console.WriteLine("\nInserisci un giorno della settimana:");
            string input = Console.ReadLine();

            if (Enum.TryParse(input, true, out GiorniSettimana giornoUtente) &&
                Enum.IsDefined(typeof(GiorniSettimana), giornoUtente))
            {
                StampaMessaggioDelGiorno(giornoUtente);
            }
            else
            {
                Console.WriteLine("Giorno non valido.");
            }
        }

        static void StampaMessaggioDelGiorno(GiorniSettimana giorno)
        {
            Console.WriteLine($"\nHai selezionato: {giorno}");

            switch (giorno)
            {
                case GiorniSettimana.Lunedi:
                case GiorniSettimana.Martedi:
                case GiorniSettimana.Mercoledi:
                case GiorniSettimana.Giovedi:
                case GiorniSettimana.Venerdi:
                    Console.WriteLine("È un giorno lavorativo.");
                    break;

                case GiorniSettimana.Sabato:
                case GiorniSettimana.Domenica:
                    Console.WriteLine("È weekend!");
                    break;

                case GiorniSettimana.NessunGiorno:
                    Console.WriteLine("Nessun giorno selezionato.");
                    break;

                default:
                    Console.WriteLine("Giorno non riconosciuto.");
                    break;
            }
        }
    }
}
