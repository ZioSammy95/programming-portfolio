class Program
{
    static void Main()
    {
        ContoPersonale conto = new ContoPersonale(1000m);
        conto.VisualizzaSaldo();
        conto.EffettuaPrelievo(250m);
        conto.VisualizzaSaldo();
    }
}
