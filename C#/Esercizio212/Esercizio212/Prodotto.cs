class Prodotto
{
    private decimal prezzo;

    public void VisualizzaPrezzo()
    {
        Console.WriteLine("Prezzo: " + prezzo);
    }

    internal decimal CalcolaSconto(decimal scontoPercentuale)
    {
        decimal sconto = prezzo * scontoPercentuale / 100;
        return prezzo - sconto;
    }
}