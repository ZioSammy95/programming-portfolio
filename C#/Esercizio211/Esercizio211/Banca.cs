using System;

public class Banca
{
    // Campo privato
    private decimal saldo;

    // Costruttore per inizializzare il saldo (facoltativo)
    public Banca(decimal saldoIniziale)
    {
        saldo = saldoIniziale;
    }

    // Metodo pubblico per visualizzare il saldo
    public void VisualizzaSaldo()
    {
        Console.WriteLine($"Saldo disponibile: {saldo} €");
    }

    // Metodo protetto per prelevare denaro
    protected void PrelevaDenaro(decimal importo)
    {
        if (importo <= 0)
        {
            Console.WriteLine("Importo non valido.");
            return;
        }

        if (importo > saldo)
        {
            Console.WriteLine("Fondi insufficienti.");
        }
        else
        {
            saldo -= importo;
            Console.WriteLine($"Prelievo di {importo} € effettuato con successo.");
        }
    }
}