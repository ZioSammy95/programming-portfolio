using System;

class Program
{
    static void Main()
    {
        DateTime? dataPrenotazione = null;

        Console.WriteLine("Vuoi inserire una data per la prenotazione? (s/n)");
        string risposta = Console.ReadLine().ToLower();

        if (risposta == "s")
        {
            Console.WriteLine("Inserisci la data nel formato gg/mm/aaaa:");
            string inputData = Console.ReadLine();

            if (DateTime.TryParse(inputData, out DateTime dataInserita))
            {
                dataPrenotazione = dataInserita;
                Console.WriteLine($"Data prenotazione impostata a: {dataPrenotazione.Value.ToString("dd/MM/yyyy")}");
            }
            else
            {
                Console.WriteLine("Formato data non valido. Nessuna data salvata.");
            }
        }
        else
        {
            Console.WriteLine("Nessuna data impostata per la prenotazione.");
        }

        // Verifica successiva
        if (dataPrenotazione != null)
        {
            Console.WriteLine("Hai prenotato per il giorno: " + dataPrenotazione.Value.ToString("dddd dd MMMM yyyy"));
        }
        else
        {
            Console.WriteLine("La prenotazione non ha una data.");
        }
    }
}
