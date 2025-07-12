using Esercizio205;

interface IRecitabile
{
    void Recita();
}



class Program
{
    static void Main()
    {
        // Istanza di Cane
        IRecitabile cane = new Cane();
        cane.Recita();

        // Istanza di Gatto
        IRecitabile gatto = new Gatto();
        gatto.Recita();
    }
}