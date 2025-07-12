public class ContoPersonale : Banca
{
    public ContoPersonale(decimal saldoIniziale) : base(saldoIniziale) { }

    public void EffettuaPrelievo(decimal importo)
    {
        PrelevaDenaro(importo); // Accessibile perché è 'protected'
    }
}