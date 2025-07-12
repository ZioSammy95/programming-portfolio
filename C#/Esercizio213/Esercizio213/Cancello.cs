class Cancello
{
    protected bool aperto;

    public void StatoCancello()
    {
        if (aperto)
            Console.WriteLine("Il cancello è aperto.");
        else
            Console.WriteLine("Il cancello è chiuso.");
    }
}
